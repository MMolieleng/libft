HEADERS = libft.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = src/ft_memset.c\
	src/ft_putstr.c\
	src/ft_putchar.c

LFLAGS = -L

LDLIBS = -lft

PROG = libft.a

OBJECTS = $(SRC:.c=.o)

$(PROG): $(HEADERS)
	@$(CC) $(CFLAGS) -c $(SRC) $(HEADERS)
	@ar rc $(PROG) *.o
	@ranlib $(PROG)
	@echo "Compiling library....[OK]"

all:$(PROG)
	@echo "Finish status....[OK]"

clean:
	rm -f *.o

fclean:
	rm -f $(PROG)

re: fclean all

.PHONEY: clean fclean re
