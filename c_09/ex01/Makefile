# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amery <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 15:28:02 by amery             #+#    #+#              #
#    Updated: 2022/08/03 11:29:16 by amery            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror 

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c 

OBJS = ${SRCS:.c=.o}  

.c.o :	
	$(CC) $(CFLAGS) -I includes/ -c $< -o ${<:.c=.o}  

${NAME} : $(OBJS)
	ar rcs ${NAME} $(OBJS)

all : ${NAME}

clean :	
	rm -f $(OBJS)  

fclean : clean
	rm -f ${NAME}

re : fclean all
