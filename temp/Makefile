SRCS = ft_putchar.c ft_putstr.c

OBJS = $(addprefix srcs/, ${SRCS:.c=.o})

NAME = do-so

.c.o: ${SRCS}
	gcc -Wall -Werror -Wextra -c -I includes $< -o ${<:.c=.o}

$@ $< $> $<

clean: a
	shell

.PHONY = clean fclean all re
