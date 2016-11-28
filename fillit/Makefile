# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 13:37:13 by pguillie          #+#    #+#              #
#*   Updated: 2016/11/28 15:21:17 by pbourlet         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCF = 	\
		main.c \
		ft_check.c \
		ft_errors.c \
		ft_solve.c\
		ft_space.c\
		ft_append.c\
		ft_disp.c \
		ft_erase.c \
		ft_sizemin.c\
		ft_init.c \

SRCL = \
	   ft_sqrt.c\
	   ft_putendl.c\
	   ft_strnew.c\
	   ft_memset.c\
	   ft_strdup.c\
	   ft_strcpy.c\
	   ft_putchar.c\
	   ft_putstr.c\
	   ft_putnbr.c\

OBJ = 	$(SRCF:.c=.o) $(SRCL:.c=.o)

all: $(NAME)

$(NAME): 
	gcc -c -Wall -Werror -Wextra $(SRCF) $(SRCL)
	gcc -Wall -Werror -Wextra -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
