#!/bin/sh
clang -Wall -Wextra -Werror -o Sully Sully.c
mkdir -p tmp ; cp Sully tmp/ ; cd tmp/ ; ./Sully ; ls -al | grep Sully | wc -l 
diff ../Sully.c Sully_5.c ; diff ../Sully.c Sully_4.c ; diff Sully_5.c Sully_0.c
cd ..
rm -rf tmp
