# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 16:21:43 by mmoliele          #+#    #+#              #
#    Updated: 2016/08/23 17:38:58 by mmoliele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -c -Wall -Werror -Wextra

SRC = 	ft_putstr.c		\
		ft_putchar.c	\
		ft_strdup.c		\
		ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\

INC = 	libft.h			\

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
