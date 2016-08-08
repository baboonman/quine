#!/bin/sh
q="quine"
clang -Wall -Wextra -Werror -o $q$1.out $q$1.c
cat $q$1.c
echo "------------------------------"
./$q$1.out 
./$q$1.out > $q$1_out
echo "------------------------------"
diff $q$1.c $q$1_out
rm $q$1.out $q$1_out
