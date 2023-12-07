#!/usr/bin/bash

INPUT=$1
OUTPUT=$2

gcc -o $OUTPUT.o \
    -c def_$OUTPUT.h \
    -Werror \
    -D__PERIPH_CHECK \
    -D__INPUT_FILE="\"$INPUT.h\"" \
    -D__OUTPUT_FILE="\"$OUTPUT.h\"" \
    -I./generator \
    -I$(pwd)
rm -f $OUTPUT.o
