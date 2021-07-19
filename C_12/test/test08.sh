#!/bin/sh
cp ex07/ft_list.h ex08/ft_list.h
gcc -Wall -Werror -Wextra \
	test/test08.c \
	ex08/ft_list_reverse.c \
	ex00/ft_create_elem.c \
	&& ./a.out
