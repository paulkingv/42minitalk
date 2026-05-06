CC = cc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_putchar_fd_int.c   ft_putnbr.c ft_putstr.c\
ft_printf.c  ft_putnbr_base.c ft_putpointer.c ft_strlen.c

NAME = libftprintf.a



OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
