#!/bin/sh
gcc -Wall -Wextra -Werror ex04/ft_strs_to_tab.c test/test04.c  \
	&& ./a.out \
	&& echo "OK"
