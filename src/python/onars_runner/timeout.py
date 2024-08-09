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

import signal


class Timeout:
    """Based on https://aalvarez.me/posts/making-functions-timeout-in-python/"""

    def __init__(self, seconds):
        self._seconds = seconds

    def __enter__(self):
        # Register and schedule the signal with the specified time
        signal.signal(signal.SIGALRM, Timeout._raise_timeout)
        signal.alarm(self._seconds)
        return self

    def __exit__(self, exc_type, exc_value, traceback):
        # Unregister the signal so it won't be triggered if there is
        # no timeout
        signal.signal(signal.SIGALRM, signal.SIG_IGN)

    @staticmethod
    def _raise_timeout(signum, frame):
        raise TimeoutError
