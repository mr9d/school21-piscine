#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test07.c \
	ex07/ft_list_at.c \
	ex00/ft_create_elem.c \
	&& ./a.out
