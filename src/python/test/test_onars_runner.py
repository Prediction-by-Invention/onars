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
import os
import pprint
import unittest
import warnings

from src.onars_runner.repl.onars_repl import OnarsREPL
from src.onars_runner.runner.onars_runner import ONarsRunner
from src.onars_runner.util.uuid_util import UUIDUtil

ONARS_PATH = "./bin/onars_large_16384"


def ignore_warnings(test_func):
    def do_test(self, *args, **kwargs):
        with warnings.catch_warnings():
            warnings.simplefilter("ignore", ResourceWarning)
            test_func(self, *args, **kwargs)

    return do_test


class TestOnarsRunner(unittest.TestCase):

    @ignore_warnings
    def test_uuid_extract(self):
        uuid_incoming = UUIDUtil.get()
        input_str = f"{uuid_incoming} : < a --> b>."
        uuid, input_text = OnarsREPL("dummy").extract_uuid_and_input(input_str)
        if uuid and input_text:
            print(f"Extracted UUID: {uuid}")
            print(f"Extracted Input: {input_text}")
        else:
            print("UUID or input not found.")
        self.assertEqual(uuid, uuid_incoming)

    @ignore_warnings
    def test_input_output(self):
        onars = ONarsRunner(ONARS_PATH)
        user_input = "< a --> b >."
        onars.add_input(user_input, do_print=True)
        print(onars.get_output())
        self.assertIsNotNone(onars.get_output())
        onars.exit()

    @ignore_warnings
    def test_nal_with_onars(self):
        resources_dir = "./resources/"
        for root, _, files in os.walk(resources_dir):
            fails = []
            for f in files:
                file_path = os.path.join(root, f)
                onars = ONarsRunner(ONARS_PATH)
                try:
                    with open(file_path, "r") as file:
                        print(f">>>>> Running file '{file}'")
                        for line in file:
                            output = onars.add_input(line, do_print=True)
                            pprint.pprint(f">>>>> OUTPUT '{output}'")
                            if not onars.alive:
                                onars.exit()
                                self.fail(f"Died with file {file_path}")
                            self.assertIsNotNone(onars.get_output())
                        print(f">>>>> Ending file '{file}'")
                        onars.exit()
                except Exception as error:
                    onars.exit()
                    fails.append(f"{error.__str__()} with file {file_path}")
            if len(fails) > 0:
                for failure in fails:
                    print(failure)
                self.fail("Failed files!")
            self.assertTrue(True)

    @unittest.skip("Manual test")
    def test_nal_file(self):
        file_path = "./resources/prefergeneral.nal"
        onars = ONarsRunner(ONARS_PATH)
        with open(file_path, "r") as file:
            for line in file:
                print(f"INPUT --> {line}")
                output = onars.add_input(line, do_print=True)
                pprint.pprint(f"OUTPUT --> {output}")
                if not onars.alive:
                    self.fail(f"Died with file {file_path}")
                self.assertIsNotNone(onars.get_output())
        onars.exit()


if __name__ == "__main__":
    unittest.main()
