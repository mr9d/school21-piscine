#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test03.c \
	ex03/ft_list_last.c \
	ex00/ft_create_elem.c \
	&& ./a.out
