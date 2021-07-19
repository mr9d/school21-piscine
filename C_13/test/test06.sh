#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test06.c \
	ex06/btree_level_count.c \
	ex04/btree_insert_data.c \
	ex00/btree_create_node.c \
	&& ./a.out
