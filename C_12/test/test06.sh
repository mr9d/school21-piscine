#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test06.c \
	ex06/ft_list_clear.c \
	ex00/ft_create_elem.c \
	&& ./a.out
