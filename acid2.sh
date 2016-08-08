#!/bin/sh


clang -Wall -Wextra -Werror -o Grace Grace2.c
./Grace

cat Grace2.c
echo "------------------------------"
cat Grace_kid.c
echo "------------------------------"
diff Grace.c Grace_kid.c
