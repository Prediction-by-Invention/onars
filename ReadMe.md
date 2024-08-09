# Onars

## Overview

- Onars is an experimental fork of OpenNARS for Applications (ONA) v0.9.2.
- It was developed as part of an ongoing research prototype called Ontal (hence Onars "Ontal NARS").
- ONA is great but it is difficult to manage the connection to the engine and it will terminate if you have any errors in your code.
- Onars provides a nice REPL, better error handling and a HTTP daemon that allows communication with the ONA NARS engine via REST/JSON.
- Onars also has several different sizes of memory for concepts.
- This code is being released in the hope that it might be useful to someone else.
- There are Linux binaries available in the bin folder and (some) project setup details below.
- Please note this is an alpha level research project with C, Python and Perl. Expect issues and bugs :)
- Perl was used to create the HTTP daemon as it allows handling both an Expect process and a HTTP connection at the same time.

### Usage

All paths are relative to the repo root.

#### Onars Binaries

- The binaries below in the `bin` folder are basically ONA NAR binaries except they each have a different sized concept memory, as per the name.

- These can be run in the same way as ONA NAR .

```
onars_exlarge_32768
onars_large_16384
onars_medium_8192
onars_small_4096
onars_tiny_2048
onars_nano_32
```

#### Onars REPL

- The `onars_repl`can be started as below. All paths are relative and you need to pass the name of the Onars binary to use.

```
 ./bin/onars/onars_repl --bin_dir=bin/onars --bin_name=onars_large_16384 --timeout=10 --output_dir=/tmp
```

- This will start a friendly REPL as below:

```
-----------------------------------------------------
Welcome to the Ontal NARS (Onars) shell, based on ONA v0.9.2.
For more information please visit https://ontal.ai
-----------------------------------------------------
Using bin directory: bin/onars
Using Onars executable: onars_large_16384
Timeout for Onars input: 10 seconds
-----------------------------------------------------
To quit, type exit()
-----------------------------------------------------
Started '/home/seamus/GitHub/pbi/onars/bin/onars/onars_large_16384'...
onars:$ 
```

#### Onars HTTP Daemon

- The Perl based Onars HTTP Daemon can be started by calling it:

```
./bin/onars_httpd 
```

- This will start the HTTP Daemon:

```
Onars REPL HTTPD started at: http://127.0.0.1:8080/

Server PID: 229348 (saved to /home/seamus/GitHub/pbi/onars/bin/../tmp/onars_repl_httpd.pid)
```

- You can interact with the HTTP Daemon with curl:

```
curl -X POST http://localhost:8080/send_input -d "< a --> b >."
```

- This will return some useful JSON:

```json
{
   "error" : "",
   "uuid" : "CEFE2798-5676-11EF-BDCC-F7B58A3F3896",
   "stdout" : "Got input: '< a --> b >.'\nInput: <a --> b>. Priority=1.000000 Stamp=[1] Truth: frequency=1.000000, confidence=0.900000\nSelected: <a --> b>. Priority=1.000000 Stamp=[1] Truth: frequency=1.000000, confidence=0.900000",
   "result" : {
      "requestOutputArgs" : false,
      "answers" : [],
      "executions" : [],
      "selections" : [
         {
            "Stamp" : [
               1
            ],
            "occurrenceTime" : "eternal",
            "Priority" : "1.000000",
            "term" : "<a --> b>",
            "punctuation" : ".",
            "truth" : {
               "frequency" : "1.000000",
               "confidence" : "0.900000"
            }
         }
      ],
      "reason" : null,
      "raw" : "Input: <a --> b>. Priority=1.000000 Stamp=[1] Truth: frequency=1.000000, confidence=0.900000\nSelected: <a --> b>. Priority=1.000000 Stamp=[1] Truth: frequency=1.000000, confidence=0.900000",
      "input" : [
         {
            "Stamp" : [
               1
            ],
            "occurrenceTime" : "eternal",
            "term" : "<a --> b>",
            "punctuation" : ".",
            "Priority" : "1.000000",
            "truth" : {
               "confidence" : "0.900000",
               "frequency" : "1.000000"
            }
         }
      ],
      "derivations" : []
   }
}
```



## C Source Code Changes

#### A new CONCEPTS_MAX_SETTING

Set CONCEPTS_MAX_SETTING in `src/Config.h`

```
enum CONCEPTS_MAX_SETTING
{
CONCEPTS_MAX_EXLARGE = 32768,
CONCEPTS_MAX_LARGE = 16384,
CONCEPTS_MAX_MEDIUM = 8192,
CONCEPTS_MAX_SMALL = 4096,
CONCEPTS_MAX_TINY = 2048,
CONCEPTS_MAX_NANO = 32
};

//Maximum amount of concepts
#define CONCEPTS_MAX CONCEPTS_MAX_LARGE

```

#### Build

There is a supplied `make` file and a script in `scr/scripts/build.sh` that were customised to generate all the onars binaries for the various sized memories.

## Python Source Code

- A Python source code for the Onars REPL is provided. 
- This will need to be set up with a virtual environment etc. You can use the supplied 'requirements.txt' for this purpose with 'pip'.
- There is also supplied a [PyInvoke](https://www.pyinvoke.org/) file at `tasks.py` that will be useful. This contains tasks for creating a binary for the REPL using the Nuitka compiler.

### Perl Source Code

- The Perl source code for the HTTP Daemon is also supplied. This was compiled using `PAR::Packer` and `Perl 5.40`.



THIS SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NON-INFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES, OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT, OR OTHERWISE, ARISING FROM, OUT OF, OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

