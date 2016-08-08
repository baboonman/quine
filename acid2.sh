#!/bin/sh
clang -Wall -Wextra -Werror -o Grace Grace.c
./Grace
cat Grace.c
echo "------------------------------"
cat Grace_kid.c
echo "------------------------------"
diff Grace.c Grace_kid.c
