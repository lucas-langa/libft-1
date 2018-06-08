# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/20 16:27:01 by tmaselem          #+#    #+#              #
#    Updated: 2018/06/08 14:41:59 by tmaselem         ###   ########.fr        #
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
	  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_iswhitespace.c ft_strtrim.c ft_strsplit.c\
	  ft_wordl.c ft_wordn.c ft_clear.c ft_wordcount.c

OBJ = ft_putchar.o ft_putstr.o ft_strlen.o ft_putnbr.o ft_isdigit.o ft_memset.o ft_atoi.o\
	  ft_memcpy.o ft_bzero.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strcat.o\
	  ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strncat.o ft_strncpy.o ft_strdup.o ft_strlcat.o\
	  ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strncmp.o ft_isalpha.o ft_isalnum.o\
	  ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_memalloc.o ft_memdel.o\
	  ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o\
	  ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_iswhitespace.o\
	  ft_strtrim.o ft_strsplit.o ft_wordl.o ft_wordn.o ft_clear.o ft_wordcount.o

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
