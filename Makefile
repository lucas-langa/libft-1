# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/20 16:27:01 by tmaselem          #+#    #+#              #
#    Updated: 2018/05/20 16:51:08 by tmaselem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PAT = ./sources/
H_PATH = ./headers/
HEDS = $(H_PATH)libft.h
E_FLAGS = -Wall -Werror -Wextra
OPT_FLAGS = -c -I $(HEDS)
SRC = $(SRC_PAT)basics.c $(SRC_PAT)main.c
OBJ = basics.o main.o

all: $(NAME)

$(NAME):
	gcc $(E_FLAGS) $(OPT_FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f /bin/$(OBJ)
flean:clean
	rm -f /bin/$(NAME)
re:fclean all
