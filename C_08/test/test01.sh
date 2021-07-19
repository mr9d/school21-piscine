#!/bin/sh
gcc -Wall -Wextra -Werror test/test01.c \
	&& ./a.out a b c \
	&& ./a.out \
	&& ./a.out g h
