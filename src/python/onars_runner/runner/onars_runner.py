#  Copyright (c) 2024 Seamus Brady seamus@corvideon.ie, Corvideon Ltd. T/A Prediction By Invention.
#
#  The above copyright notice and this permission notice shall be included in
#  all copies or substantial portions of the Software.
#
#  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
#  THE SOFTWARE.

#
#
import ast
import subprocess  # nosec
import sys

from src.onars_runner.exceptions.runner_exception import RunnerException
from src.onars_runner.timeout import Timeout


class ONarsRunner:
    """A runner for Onars"""

    SHELL = "shell"
    DEFAULT_TIMEOUT = 30

    def __init__(self, onars_path: str, timeout=DEFAULT_TIMEOUT):
        print(f"Started '{onars_path}'...")
        self._onars_path = onars_path
        self._timeout = timeout
        self._onars_process = self.spawn_nar()

    @property
    def timeout(self):
        return self._timeout

    @property
    def onars_path(self):
        return self._onars_path

    @property
    def onars_process(self):
        return self._onars_process

    @onars_process.setter
    def onars_process(self, new_process):
        self._onars_process = new_process

    @property
    def alive(self):
        return self.onars_process.poll() is None

    # noinspection PyMethodMayBeStatic
    def spawn_nar(self):
        try:
            return subprocess.Popen(
                [self.onars_path, self.SHELL],
                stdin=subprocess.PIPE,  # nosec
                stdout=subprocess.PIPE,  # nosec
                universal_newlines=True,
            )
        except Exception as error:
            raise RunnerException(error.__str__())

    # noinspection PyMethodMayBeStatic
    def parse_truth(self, truth_string):
        return {
            "frequency": truth_string.split("frequency=")[1]
            .split(" confidence")[0]
            .replace(",", ""),
            "confidence": truth_string.split(" confidence=")[1]
            .split(" dt=")[0]
            .split(" occurrenceTime=")[0],
        }

    # noinspection PyMethodMayBeStatic
    def parse_task(self, task_string):
        parsed_task = {"occurrenceTime": "eternal"}
        if " :|:" in task_string:
            parsed_task["occurrenceTime"] = "now"
            task_string = task_string.replace(" :|:", "")
            if "occurrenceTime" in task_string:
                parsed_task["occurrenceTime"] = task_string.split("occurrenceTime=")[
                    1
                ].split(" ")[0]
        if "Stamp" in task_string:
            parsed_task["Stamp"] = ast.literal_eval(
                task_string.split("Stamp=")[1].split("]")[0] + "]"
            )
        sentence = (
            task_string.split(" occurrenceTime=")[0]
            if " occurrenceTime=" in task_string
            else task_string.split(" Stamp=")[0]
            .split(" Priority=")[0]
            .split(" creationTime=")[0]
        )
        parsed_task["punctuation"] = sentence[-4] if ":|:" in sentence else sentence[-1]
        parsed_task["term"] = (
            sentence.split(" creationTime")[0]
            .split(" occurrenceTime")[0]
            .split(" Truth")[0]
            .split(" Stamp=")[0][:-1]
        )
        if "Truth" in task_string:
            parsed_task["truth"] = self.parse_truth(task_string.split("Truth: ")[1])
        if "Priority" in task_string:
            parsed_task["Priority"] = task_string.split("Priority=")[1].split(" ")[0]
        return parsed_task

    def parse_reason(self, raw_string):
        if "implication: " not in raw_string:
            return None
        implication = self.parse_task(
            raw_string.split("implication: ")[-1].split("precondition: ")[0]
        )  # last reason only (others couldn't be associated currently)
        precondition = self.parse_task(
            raw_string.split("precondition: ")[-1].split("\n")[0]
        )
        implication["occurrenceTime"] = "eternal"
        precondition["punctuation"] = implication["punctuation"] = "."
        reason = {
            "desire": raw_string.split("decision expectation=")[-1].split(" ")[0],
            "hypothesis": implication,
            "precondition": precondition,
        }
        return reason

    # noinspection PyMethodMayBeStatic
    def parse_execution(self, execution_string):
        if "args " not in execution_string:
            return {"operator": execution_string.split(" ")[0], "arguments": []}
        return {
            "operator": execution_string.split(" ")[0],
            "arguments": execution_string.split("args ")[1].split("{SELF} * ")[1][:-1],
        }

    def get_raw_output(self):
        try:
            self.onars_process.stdin.write("0\n")
            self.onars_process.stdin.flush()
            ret = ""
            before = []
            request_output_args = False
            while "done with 0 additional inference steps." != ret.strip():
                if ret != "":
                    before.append(ret.strip())
                if ret.strip() == "//Operation result product expected:":
                    request_output_args = True
                    break
                ret = self.onars_process.stdout.readline()
            return before[:-1], request_output_args
        except Exception as error:
            raise RunnerException(error.__str__())

    def get_output(self):
        try:
            lines, request_output_args = self.get_raw_output()
            executions = [
                self.parse_execution(line) for line in lines if line.startswith("^")
            ]
            inputs = [
                self.parse_task(line.split("Input: ")[1])
                for line in lines
                if line.startswith("Input:")
            ]
            derivations = [
                self.parse_task(
                    line.split(
                        "Derived: " if line.startswith("Derived:") else "Revised: "
                    )[1]
                )
                for line in lines
                if line.startswith("Derived:") or line.startswith("Revised:")
            ]
            answers = [
                self.parse_task(line.split("Answer: ")[1])
                for line in lines
                if line.startswith("Answer:")
            ]
            selections = [
                self.parse_task(line.split("Selected: ")[1])
                for line in lines
                if line.startswith("Selected:")
            ]
            reason = self.parse_reason("\n".join(lines))
            return {
                "input": inputs,
                "derivations": derivations,
                "answers": answers,
                "executions": executions,
                "reason": reason,
                "selections": selections,
                "raw": "\n".join(lines),
                "requestOutputArgs": request_output_args,
            }
        except Exception as error:
            raise RunnerException(error.__str__())

    def get_stats(self):
        try:
            stats = {}
            lines, _ = self.get_raw_output()
            for line in lines:
                if ":" in line:
                    left_side = line.split(":")[0].replace(" ", "_").strip()
                    right_side = float(line.split(":")[1].strip())
                    stats[left_side] = right_side
            return stats
        except Exception as error:
            raise RunnerException(error.__str__())

    def add_input(self, narsese, do_print=True):
        print(f"Got input: '{narsese}'")
        try:
            with Timeout(seconds=self.timeout):
                self.onars_process.stdin.write(narsese + "\n")
                self.onars_process.stdin.flush()
                return_stats = narsese == "*stats"
                if return_stats:
                    if do_print:
                        print("\n".join(self.get_raw_output()[0]))
                    return self.get_stats()
                ret = self.get_output()
                if do_print:
                    print(ret["raw"])
                    sys.stdout.flush()
            return ret
        except Exception as error:
            raise RunnerException(error.__str__())

    def exit(self):
        print(f"Exiting {self.onars_path}")
        try:
            self.onars_process.terminate()
            self.onars_process.wait()
        except Exception as error:
            raise RunnerException(error.__str__())

    def reset(self):
        self.add_input("*reset")

    def volume_up(self):
        self.add_input("*volume=100")

    @staticmethod
    def format_task(task):
        task_string = task["term"] + task["punctuation"]
        task_string += (
            " :|: occurrenceTime=" + task["occurrenceTime"]
            if task["occurrenceTime"].isdigit()
            else ""
        )
        if "Priority" in task:
            task_string += " Priority=" + str(task["Priority"])
        if "truth" in task:
            task_string += (
                " Truth: frequency="
                + task["truth"]["frequency"]
                + " confidence="
                + task["truth"]["confidence"]
            )
        return task_string
