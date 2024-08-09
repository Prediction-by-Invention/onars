# Copyright 2023 seamus@ontal.ai, Corvideon Limited.
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
import shortuuid
from uuid6 import uuid6


# a class for generating UUIDs
class UUIDUtil:
    SHORT_UUID_LEN = 14

    @staticmethod
    def get(long_uuid=False) -> str:
        if long_uuid:
            return str(uuid6().__str__())
        short_uuid = shortuuid.encode(uuid6())
        return short_uuid[: UUIDUtil.SHORT_UUID_LEN]
