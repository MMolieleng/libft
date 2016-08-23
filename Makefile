# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 10:52:14 by mmoliele          #+#    #+#              #
#    Updated: 2016/08/23 15:30:42 by mmoliele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mylibft



SRC = main.c

CFLAGS = -Wall -Werror -Wextra

LIB = libft/

LIBOPTIONS = -L libft/ -lft -I ./libft/includes/

$(NAME):
	@make -C libft/
	@gcc $(CFLAGS) main.c -o $(NAME) $(LIBOPTIONS)
	@echo "\x1B[32mCompiled project.\x1B[0m"

all: $(NAME)

clean:
	@make -C libft/ clean
	@rm -f $(NAME)
	@echo "\x1B[32mCleaned up object files.\x1B[0m"

fclean: clean
	@make -C libft/ fclean
	@rm -f *.o
	@echo "\x1B[32mCleaned up compiled files.\x1B[0m"

re: fclean all
