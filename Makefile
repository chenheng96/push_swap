NAME	= push_swap
SRCS	=

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -fsanitize=address -g3

INCLUDE = -Iinclude -Ilibft
LDFLAGS = -Llibft
LDLIBS	= -lft

LIBFT	= libft/libft.a

OBJS	= ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${LIBFT} ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME} ${INCLUDE} ${LDFLAGS} ${LDLIBS}

${LIBFT}:
		make -C libft

clean:
		${RM} *.o
		make clean -C libft

fclean:	clean
		${RM} ${NAME}
		make fclean -C libft

re:		fclean all

norm:
		norminette *.c *.h

.PHONY: all clean fclean re libft norm
