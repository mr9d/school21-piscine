#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test04.c \
	ex04/btree_insert_data.c \
	ex00/btree_create_node.c \
	&& ./a.out
