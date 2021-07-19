#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test01.c \
	ex01/btree_apply_prefix.c \
	ex00/btree_create_node.c \
	&& ./a.out
