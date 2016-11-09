#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/06 21:39:23 by pbourlet          #+#    #+#             *#
#*   Updated: 2016/11/06 22:00:07 by pbourlet         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

SRC =	ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strdup.c ft_strmap.c \
	ft_strnstr.c ft_atoi.c ft_memalloc.c ft_memset.c ft_strcat.c \
	ft_strequ.c ft_strmapi.c ft_strrchr.c ft_bzero.c ft_memccpy.c \
	ft_putchar_fd.c ft_strchr.c ft_striter.c ft_strncat.c ft_strstr.c \
	ft_isalnum.c ft_memchr.c ft_putendl.c ft_strclr.c ft_striteri.c \
	ft_strncmp.c ft_strsub.c ft_isalpha.c ft_memcmp.c ft_putendl_fd.c \
	ft_strcmp.c ft_strjoin.c ft_strncpy.c ft_strtrim.c ft_isascii.c \
	ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_strlcat.c ft_strnequ.c \
	ft_tolower.c ft_isdigit.c ft_memdel.c ft_putnbr_fd.c ft_strdel.c \
	ft_strlen.c ft_strnew.c ft_toupper.c ft_nblen.c ft_itoa.c ft_strsplit.c \
	ft_putchar.c ft_putstr.c ft_strrev.c

OBJ =	ft_isprint.o ft_memmove.o ft_putstr_fd.o ft_strdup.o ft_strmap.o \
	ft_strnstr.o ft_atoi.o ft_memalloc.o ft_memset.o ft_strcat.o \
	ft_strequ.o ft_strmapi.o ft_strrchr.o ft_bzero.o ft_memccpy.o \
	ft_putchar_fd.o ft_strchr.o ft_striter.o ft_strncat.o ft_strstr.o \
	ft_isalnum.o ft_memchr.o ft_putendl.o ft_strclr.o ft_striteri.o \
	ft_strncmp.o ft_strsub.o ft_isalpha.o ft_memcmp.o ft_putendl_fd.o \
	ft_strcmp.o ft_strjoin.o ft_strncpy.o ft_strtrim.o ft_isascii.o \
	ft_memcpy.o ft_putnbr.o ft_strcpy.o ft_strlcat.o ft_strnequ.o \
	ft_tolower.o ft_isdigit.o ft_memdel.o ft_putnbr_fd.o ft_strdel.o \
	ft_strlen.o ft_strnew.o ft_toupper.o ft_nblen.o ft_itoa.o ft_strsplit.o \
	ft_putchar.o ft_putstr.o ft_strrev.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all
