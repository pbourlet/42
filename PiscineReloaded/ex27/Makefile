# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 18:30:30 by pbourlet          #+#    #+#              #
#    Updated: 2016/11/03 19:44:45 by pbourlet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_putchar.c ft_putstr.c ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_putchar.o ft_putstr.o ft_display_file.o

clean:
	rm -f ft_putchar.o ft_putstr.o ft_display_file.o

fclean: clean
	rm -rf $(NAME)
