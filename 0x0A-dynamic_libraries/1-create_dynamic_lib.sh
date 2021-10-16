#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -fPIC *.c
gcc *.o -shared -o liball.so
