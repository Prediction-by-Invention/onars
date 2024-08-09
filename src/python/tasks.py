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


from invoke import task

SRC_ROOT = "./src/"


@task
def test(c):
    print("Running unit tests...")
    c.run("python -m unittest discover -v")


@task
def mypy(c):
    print("Running mypy...")
    c.run(f"mypy {SRC_ROOT}")


@task
def freeze(c):
    print("Running pip freeze...")
    c.run("pip freeze > ./requirements.txt")


@task
def formatter(c):
    print("Running black formatter...")
    c.run(f"python -m black {SRC_ROOT}")


@task
def linter(c):
    print("Running flake8...")
    # E501 is turned off - ignore long lines and whitespaces
    c.run(f"flake8 --extend-ignore=E501,W291,W293 {SRC_ROOT}")


@task
def bandit(c):
    print("Running bandit security checks...")
    c.run(f"bandit -r {SRC_ROOT}")


@task
def isort(c):
    print("Running isort...")
    c.run(f"isort --atomic .")


@task
def run_all(c):
    print("Running all checks...")
    isort(c)
    mypy(c)
    formatter(c)
    linter(c)
    bandit(c)
    test(c)


@task
def onars_py(c):
    c.run("python ./src/onars_runner/app.py --bin_dir=./bin --bin_name=onars_large_16384 --timeout=10 --output_dir=/tmp/onars")


@task
def onars_bin(c):
    c.run("./bin/onars_repl --bin_dir=./bin --bin_name=onars_large_16384 --timeout=10")


@task
def build(c):
    c.run("python -m nuitka ./src/onars_runner/app.py")
    c.run("mv ./app.bin ./bin/onars_repl")
    print("Done.")
