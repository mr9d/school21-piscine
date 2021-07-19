#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test03.c \
	ex03/btree_apply_suffix.c \
	ex00/btree_create_node.c \
	&& ./a.out
