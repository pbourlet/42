# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 13:37:13 by pguillie          #+#    #+#              #
#*   Updated: 2016/11/23 19:53:26 by pbourlet         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = 	main.c \
		ft_check.c \
		ft_errors.c \
		ft_solve.c\
		ft_space.c\
		ft_append.c\
		ft_erase.c\
		ft_disp.c

OBJ = 	$(SRC:.c=.o)

LIB = libft.a

all: $(NAME)

#compiler en .o pour tester la vitesse#

$(NAME): 
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) -L. $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
