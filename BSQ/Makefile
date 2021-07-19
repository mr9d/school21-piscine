
SRCS	= srcs/bsq.c srcs/ft_console.c srcs/parse_field.c srcs/parse_lines.c srcs/parse_lines2.c srcs/mallocs.c srcs/frees.c srcs/find_square.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= gcc
RM		= rm -f
AR		= ar rc

CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${HEADER}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

