# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/20 16:27:01 by tmaselem          #+#    #+#              #
#    Updated: 2018/06/16 23:44:41 by tmaselem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
H_PATH = libft.h
E_FLAGS = -Wall -Werror -Wextra
OPT_FLAGS = -c -I $(H_PATH)
SRC = ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr.c ft_isdigit.c ft_memset.c ft_atoi.c \
	  ft_memcpy.c ft_bzero.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcat.c \
	  ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strncat.c ft_strncpy.c ft_strdup.c ft_strlcat.c\
	  ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strncmp.c ft_isalpha.c ft_isalnum.c\
	  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	  ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c\
	  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_iswhitespace.c ft_strtrim.c ft_itoa.c\
	  ft_strsplit.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	  ft_putnbr_fd.c ft_lstnew.c\

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc $(E_FLAGS) $(OPT_FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
