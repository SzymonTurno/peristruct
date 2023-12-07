#!/usr/bin/bash

DEVICE=$1
HEADER="$DEVICE.h"
FILEGUARD=$(echo "${DEVICE}_H" | tr '[:lower:]' '[:upper:]')

echo "#ifndef $FILEGUARD" > $HEADER
echo "#define $FILEGUARD" >> $HEADER
echo "" >> $HEADER
echo "#include <stdint.h>" >> $HEADER
gcc -E def_$HEADER -I./generator | grep -v "^\#" >> $HEADER
echo "" >> $HEADER
echo "#endif /* $FILEGUARD */" >> $HEADER
