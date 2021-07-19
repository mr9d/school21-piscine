#!/bin/sh
gcc -Wall -Werror -Wextra ex01/ft_print_params.c
echo " === <empty>"
./a.out
echo " === hello"
./a.out hello
echo " === test1 test2 test3"
./a.out test1 test2 test3
