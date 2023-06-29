NAME = libftprintf.a
SRC = ft_printf.c ft_pf_functions.c ft_pf_hex.c ft_pf_pointer.c ft_unsigned.c
OBJS = ${SRC:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
LIBFT_PATH = libft
LIBFT = libft/libft.a

.o:.c
		@${CC} ${CFLAGS} ${INCLUDE} -c -o $@ $^

# compile libft first, then copy it to the root directory and then compile the printf files and archive them together with libft into a single library.
$(NAME): ${OBJS}
		@make -C ${LIBFT_PATH}
		@cp ${LIBFT} .
		@mv libft.a ${NAME}
		@${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
		@echo "Cleaning"
		@${RM} ${OBJS}
		

fclean: clean
		@echo "Cleaning headers"
		@${RM} ${NAME}

re: fclean all

teste: all
		@${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re