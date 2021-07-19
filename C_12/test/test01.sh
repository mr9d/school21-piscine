#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test01.c \
	ex01/ft_list_push_front.c \
	ex00/ft_create_elem.c \
	&& ./a.out
