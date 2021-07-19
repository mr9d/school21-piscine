#!/bin/sh
gcc -Wall -Werror -Wextra \
	test/test05.c \
	ex05/btree_search_item.c \
	ex04/btree_insert_data.c \
	ex00/btree_create_node.c \
	&& ./a.out
