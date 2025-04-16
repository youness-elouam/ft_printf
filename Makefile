NAME = libftprintf.a
SOURCES = \
	ft_strlen.c ft_printstr.c ft_printnbr.c ft_printchar.c ft_printhexa.c ft_printf.c \
	ft_intlen.c ft_printformat.c
OBJECTS = $(SOURCES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
