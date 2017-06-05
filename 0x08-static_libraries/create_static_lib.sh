#!/bin/bash
gcc -WALL -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
