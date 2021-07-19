#!/bin/sh
gcc -Wall -Werror -Wextra srcs/lines.c \
	srcs/dict.c \
	test/read_lines.c \
	&& ./a.out
