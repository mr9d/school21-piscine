#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test11.c \
	ex11/ft_list_find.c \
	ex00/ft_create_elem.c \
	&& ./a.out
