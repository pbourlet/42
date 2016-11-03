# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 18:32:19 by pbourlet          #+#    #+#              #
#    Updated: 2016/11/03 18:32:26 by pbourlet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c\
	  srcs/ft_strlen.c srcs/ft_swap.c

HDR = -I./includes

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(HDR)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
