
SRCS	= srcs/rush_02.c srcs/lines.c srcs/lines2.c srcs/dict.c srcs/dict2.c srcs/lines3.c srcs/pow1000.c srcs/dict_save.c srcs/ft_console.c srcs/params.c srcs/segments.c srcs/auf.c srcs/output.c srcs/strings.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

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

