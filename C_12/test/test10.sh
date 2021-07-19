#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test10.c \
	ex10/ft_list_foreach_if.c \
	ex00/ft_create_elem.c \
	&& ./a.out
