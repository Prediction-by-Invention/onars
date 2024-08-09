#!/bin/sh

##################################################
#  Ontal NARS build script
##################################################


##################################################
#  change to dir of script
##################################################
cd "${0%/*}"


##################################################
#  change to repo root dir
##################################################
cd ..
pwd

##################################################
#  set output files
##################################################
RULE_FILE=src/RuleTable.c
BIN_FILE="bin/onars"
OUTPUT=$(readlink -f $BIN_FILE)
# Print the absolute path
printf "NOTE: The output path is: $OUTPUT"

##################################################
#  clean
##################################################
rm "$OUTPUT"
rm $RULE_FILE

##################################################
#  set error flag
##################################################
set -e

##################################################
#  set source files
##################################################
SOURCE=$(ls src/c/*.c src/c/NetworkNAR/*.c | xargs)
echo "$SOURCE"

##################################################
#  set build flags
##################################################
BASE_FLAGS="-flto -g -pthread -lpthread -D_POSIX_C_SOURCE=199506L -pedantic -std=c99 -g3 -O3 $SOURCE -lm -o$OUTPUT"
NO_WARN="-Wno-unknown-pragmas -Wno-tautological-compare -Wno-dollar-in-identifier-extension -Wno-unused-parameter -Wno-unused-variable"

##################################################
#  build stage 1
##################################################
echo "Compilation started:"
gcc $@ -DSTAGE=1 -Wall -Wextra -Wformat-security $NO_WARN $BASE_FLAGS

##################################################
#  build stage 2
##################################################
echo "First stage done, generating RuleTable.c now, and finishing compilation."
$OUTPUT NAL_GenerateRuleTable > ./$RULE_FILE
gcc $@ -mfpmath=sse -msse2 -DSTAGE=2 $NO_WARN $BASE_FLAGS $RULE_FILE|| (echo "Error with SSE, hence compiling without SSE:" && gcc $@ -DSTAGE=2 $NO_WARN $BASE_FLAGS $RULE_FILE)
echo "Done."