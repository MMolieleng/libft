# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 10:52:14 by mmoliele          #+#    #+#              #
#    Updated: 2016/08/23 10:53:00 by mmoliele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mylibft

HEADERS = includes/libft.h

SRC = main.c

CFLAGS = -Wall -Werror -Wextra

LIB = libft/

LIBOPTIONS = -L libft/ -lft

$(NAME):
	@make -C libft/
	@gcc $(CFLAGS) main.c -o $(NAME) $(LIBOPTIONS)
	@echo "\x1B[32mCompiled project.\x1B[0m"

clean:
	@make -C libft/ clean
	@rm -f $(NAME)
	@echo "\x1B[32mCleaned up object files.\x1B[0m"

fclean:
	@make -C libft/ fclean
	@echo "\x1B[32mCleaned up compiled files.\x1B[0m"

re:
	@make -C libft/ re
