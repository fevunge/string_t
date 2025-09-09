CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC=string.c
OBJ=$(SRC:.c=.o)

NAME=string.so

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -shared -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
