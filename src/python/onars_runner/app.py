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
import argparse
import os
import sys
import traceback
from pathlib import Path

sys.path.append(str(Path(__file__).absolute().parent))
sys.path.append(str(Path(__file__).absolute().parent.parent))
sys.path.append(str(Path(__file__).absolute().parent.parent.parent))

from src.onars_runner.repl.onars_repl import OnarsREPL  # noqa
from src.onars_runner.runner.onars_runner import ONarsRunner  # noqa

ONA_VERSION = "ONA v0.9.2"


def main(bin_dir, bin_name, timeout, output_dir):
    print("-----------------------------------------------------")
    print(f"Welcome to the Ontal NARS (Onars) shell, based on {ONA_VERSION}.")
    print("For more information please visit https://ontal.ai")
    print("-----------------------------------------------------")
    print(f"Using bin directory: {bin_dir}")
    print(f"Using Onars executable: {bin_name}")
    print(f"Timeout for Onars input: {timeout} seconds")
    print("-----------------------------------------------------")
    print("To quit, type exit()")
    print("-----------------------------------------------------")
    bin_path = Path(os.path.join(bin_dir, bin_name).__str__())
    if bin_path.exists() and bin_path.is_file():
        try:
            if timeout is None:
                timeout = ONarsRunner.DEFAULT_TIMEOUT

            onars = ONarsRunner(
                onars_path=bin_path.absolute().__str__(), timeout=timeout
            )
            repl = OnarsREPL(bin_dir=bin_dir, output_dir=output_dir)
            repl.run(onars=onars)

        except Exception as error:
            print(f"Failed to run Onars: {error}")
            print(traceback.format_exc())
    else:
        raise Exception("Onars executable not found!")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="OnarsRunner daemon")
    parser.add_argument("--bin_dir", type=str, help="Path to the bin directory")
    parser.add_argument(
        "--bin_name", type=str, help="Name of the Onars executable to run"
    )
    parser.add_argument(
        "--timeout", type=int, help="Timeout in seconds for Onars input", default=30
    )
    parser.add_argument(
        "--output_dir", type=str, help="Directory for Onars input", default="/tmp/onars"
    )
    args = parser.parse_args()

    main(args.bin_dir, args.bin_name, args.timeout, args.output_dir)
