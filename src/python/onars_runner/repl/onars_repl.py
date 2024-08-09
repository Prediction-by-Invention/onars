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
import json
import os
import re
import subprocess  # nosec
from dataclasses import dataclass
from pathlib import Path
from typing import (
    Dict,
    Tuple,
)

from capturer import CaptureOutput  # type: ignore

from src.onars_runner.exceptions.repl_exception import REPLException
from src.onars_runner.exceptions.runner_exception import RunnerException
from src.onars_runner.runner.onars_runner import ONarsRunner
from src.onars_runner.timeout import Timeout


class OnarsREPL:
    """A simple REPL for the Onars runner."""

    REPL_PROMPT = "onars:$ "
    # a tiny onars used to test the incoming narsese
    ONARS_NANO_EXE = "onars_nano_32"

    def __init__(self, bin_dir: str, output_dir: str):
        self._bin_dir = bin_dir
        self._output_dir = output_dir
        self.check_output_dir()

    @property
    def bin_dir(self):
        return self._bin_dir

    @property
    def onars_validator_path(self):
        return Path(os.path.join(self.bin_dir, self.ONARS_NANO_EXE).__str__())

    @property
    def output_dir(self):
        return self._output_dir

    # noinspection PyMethodMayBeStatic
    def check_output_dir(self):
        try:
            if not os.path.exists(self.output_dir):
                os.makedirs(self.output_dir)
            self.ensure_trailing_slash()
        except OSError as error:
            raise RunnerException(error.__str__())

    def ensure_trailing_slash(self):
        if not self.output_dir.endswith('/'):
            self._output_dir += '/'

    def validate_input(self, narsese: str):
        """
        Validates the incoming narsese against a nano onars to see if it is OK.
        If not, the nano onars will exit."""
        try:
            with Timeout(seconds=ONarsRunner.DEFAULT_TIMEOUT):
                validator_proc = subprocess.Popen(
                    [self.onars_validator_path, ONarsRunner.SHELL],
                    stdin=subprocess.PIPE,  # nosec
                    stdout=subprocess.PIPE,  # nosec
                    universal_newlines=True,
                )
                validator_proc.stdin.write(narsese + "\n")
                validator_proc.stdin.flush()
                validator_proc.communicate()
                exit_status = validator_proc.returncode
                if exit_status == 1:
                    return False
                else:
                    validator_proc.terminate()
                    return True
        except Exception as error:
            raise RunnerException(error.__str__())

    def run(self, onars):
        while True:
            try:
                # Read input from the user
                user_input = input(self.REPL_PROMPT)

                # If the user types 'exit()', break the loop and exit the REPL
                if user_input.strip() == "exit()":
                    print("Exiting Onars REPL. Goodbye!")
                    break

                # validate the input for syntax
                with CaptureOutput() as capturer:
                    uuid, narsese_input = self.extract_uuid_and_input(user_input)
                    if uuid is None or narsese_input is None:
                        self.process_invalid_narsese("ERROR")
                    else:
                        if self.validate_input(narsese_input):
                            self.process_valid_narsese(capturer, onars, narsese_input, uuid)
                        else:
                            self.process_invalid_narsese(uuid)
            except REPLException as e:
                # Print any errors that occur during evaluation
                print(f"Error: {e}")

    # noinspection PyMethodMayBeStatic
    def extract_uuid_and_input(self, input_str: str) -> Tuple:
        # Define a regular expression pattern to match the UUID and the input
        try:
            pattern = r"^([\w-]+) : (.*)$"
            match = re.match(pattern, input_str)
            if match:
                uuid = match.group(1)
                input_text = match.group(2)
                return uuid, input_text
            else:
                return None, None
        except Exception as error:
            raise RunnerException(error.__str__())

    # noinspection PyMethodMayBeStatic
    def process_invalid_narsese(self, uuid) -> None:
        holder = OnarsResultHolder(uuid=uuid, error="Invalid input")
        self.output_json(holder, uuid)

    # noinspection PyMethodMayBeStatic
    def process_valid_narsese(self, capturer, onars, user_input, uuid) -> None:
        result_dict: Dict = onars.add_input(user_input)
        stdout_str: str = capturer.get_text()
        holder = OnarsResultHolder(uuid=uuid, stdout=stdout_str, result=result_dict)
        self.output_json(holder, uuid)

    # noinspection PyMethodMayBeStatic
    def output_json(self, holder, uuid) -> None:
        print("[START_JSON]")
        print(f"{json.dumps(holder.to_dict(), indent=4)}")
        self.write_to_output_dir(holder, uuid)
        print("[END_JSON]")

    def write_to_output_dir(self, holder, uuid):
        try:
            file_path = f"{self.output_dir}/{uuid}.json"
            json_file = open(file_path, 'w')
            json.dump(holder.to_dict(), json_file, indent=4)
            json_file.flush()
            # ensure all buffered data is written to the file system
            os.fsync(json_file.fileno())
        except Exception as error:
            raise RunnerException(error.__str__())
        finally:
            json_file.close() # noqa


@dataclass
class OnarsResultHolder:
    error: str = ""
    uuid: str = ""
    stdout: str = ""
    result: str | Dict = ""

    def to_dict(self):
        return self.__dict__
