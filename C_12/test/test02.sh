#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test02.c \
	ex02/ft_list_size.c \
	ex00/ft_create_elem.c \
	&& ./a.out
