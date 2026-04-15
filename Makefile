NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_print_char.c\
		ft_print_str.c\
		ft_print_int.c\
		ft_print_percent.c\
		ft_print_ptr.c\
		ft_printnbr_unsigned.c\
		ft_printf.c\
		ft_printhexa_base.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

$(OBJ): %.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)
fclean:	clean
		rm -f $(NAME)
re:	fclean all

.PHONY: all clean fclean re
