#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test02.c \
	ex02/btree_apply_infix.c \
	ex00/btree_create_node.c \
	&& ./a.out
