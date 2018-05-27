# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/20 16:27:01 by tmaselem          #+#    #+#              #
#    Updated: 2018/05/27 17:33:28 by tmaselem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PAT = ./sources/
H_PATH = ./headers/libft.h
E_FLAGS = -Wall -Werror -Wextra
OPT_FLAGS = -c -I $(H_PATH)
SRC = $(SRC_PAT)ft_putchar.c $(SRC_PAT)ft_putstr.c $(SRC_PAT)ft_strlen.c $(SRC_PAT)ft_putnbr.c $(SRC_PAT)ft_isdigit.c $(SRC_PAT)ft_memset.c $(SRC_PAT)ft_atoi.c $(SRC_PAT)ft_memcpy.c $(SRC_PAT)ft_bzero.c $(SRC_PAT)ft_memccpy.c $(SRC_PAT)ft_memmove.c $(SRC_PAT)ft_memchr.c $(SRC_PAT)ft_memcmp.c $(SRC_PAT)ft_strcat.c
OBJ = ft_putchar.o ft_putstr.o ft_strlen.o ft_putnbr.o ft_isdigit.o ft_memset.o ft_atoi.o ft_memcpy.o ft_bzero.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strcat.o

all: $(NAME)

$(NAME):
	gcc $(E_FLAGS) $(OPT_FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.out

re: fclean all
