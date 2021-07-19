#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test09.c \
	ex09/ft_list_foreach.c \
	ex00/ft_create_elem.c \
	&& ./a.out
