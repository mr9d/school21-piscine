#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test00.c \
	ex00/btree_create_node.c \
	&& ./a.out
