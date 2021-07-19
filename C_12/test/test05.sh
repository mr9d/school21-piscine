#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test05.c \
	ex05/ft_list_push_strs.c \
	ex00/ft_create_elem.c \
	&& ./a.out
