
SRCS	= srcs/ft_display_file.c srcs/ft_console.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

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

