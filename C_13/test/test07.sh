#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test07.c \
	test/test07_2.c \
	ex07/btree_apply_by_level.c \
	ex04/btree_insert_data.c \
	ex00/btree_create_node.c \
	&& ./a.out
