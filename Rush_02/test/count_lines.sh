#!/bin/sh
gcc -Wall -Werror -Wextra srcs/dict.c \
	test/count_lines.c \
	&& ./a.out
