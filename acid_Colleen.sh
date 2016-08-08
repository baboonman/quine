#!/bin/sh
clang -Wall -Wextra -Werror -o Colleen Colleen.c
./Colleen > Colleen_out
cat Colleen.c
echo "------------------------------"
cat Colleen_out
echo "------------------------------"
diff Colleen.c Colleen_out
rm Colleen_out Colleen
