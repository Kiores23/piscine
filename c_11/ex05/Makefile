SRCS = main.c op.c util.c ft_atoi.c

OBJS = $(addprefix srcs/, ${SRCS:c.=.o})

HEADERS = ./includes

NAME = do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(HEADERS) $^ -o $@

.c.o:
	$(CC) $(CFLAGS) -I $(HEADERS) -c $< -o ${<:.c=.o}

clean: ${OBJS}
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean clean

.PHONY: all clean flclean re
