
SRCS	= srcs/do_op.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/calc.c

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

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

