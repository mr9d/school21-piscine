#!/bin/sh
gcc -Wall -Werror -Wextra srcs/dict.c \
	test/parse_dict.c \
	&& ./a.out
