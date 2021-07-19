#!/bin/sh
cd ex00 \
	&& sh libft_creator.sh \
	&& cd .. \
	&& gcc -Wall -Wextra -Werror test/test00.c -Lex00 -lft \
	&& ./a.out \
	&& echo "OK!"
