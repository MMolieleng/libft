# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 16:21:43 by mmoliele          #+#    #+#              #
#    Updated: 2016/09/05 13:19:55 by mmoliele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -c -Wall -Werror -Wextra

SRC = 	ft_putstr.c			\
		ft_putchar.c		\
		ft_putnbr.c			\
		ft_strdup.c			\
		ft_strlen.c			\
		ft_strcat.c			\
		ft_strcpy.c			\
		ft_strncpy.c		\
		ft_strncat.c		\
		ft_strlcat.c		\
		ft_strstrim.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_strnstr.c		\
		ft_strcmp.c			\
		ft_strncmp.c		\
		ft_bzero.c			\
		ft_isalpha.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_islower.c		\
		ft_iswhitespace.c	\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_isupper.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_memset.c			\
		ft_memmove.c		\
		ft_memcpy.c			\
		ft_memcmp.c			\
		ft_memchr.c			\
		ft_memccpy.c		\
		ft_memalloc.c		\
		ft_atoi.c			\

INC = 	libft.h				\

OBJ	= $(SRC:.c=.o)

SRCDIR	= ./src/

OBJDIR	= ./objs/

INCDIR	= ./includes/

SRCS	= $(addprefix $(SRCDIR), $(SRC))

OBJS	= $(addprefix $(OBJDIR), $(OBJ))

INCS	= $(addprefix $(INCDIR), $(INC))

all: $(NAME)

$(NAME) :
	@$(CC) $(SRCS) -I $(INCS)
	@mv $(OBJ) $(OBJDIR)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean
