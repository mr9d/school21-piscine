#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test04.c \
	ex04/ft_list_push_back.c \
	ex00/ft_create_elem.c \
	&& ./a.out
