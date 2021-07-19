#!/bin/sh
gcc -Wall -Werror -Wextra ex02/ft_rev_params.c
echo " === <empty>"
./a.out
echo " === hello"
./a.out hello
echo " === test1 test2 test3"
./a.out test1 test2 test3
