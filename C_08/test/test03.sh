#!/bin/sh
gcc -Wall -Wextra -Werror test/test03.c \
	&& ./a.out \
	&& echo "OK"
