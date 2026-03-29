NAME = libftprintf.a

COMPILATION = cc -Wall -Wextra -Werror

SRC = ft_printchar_fd.c\
		ft_printstr.c\






OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c
		$(COMPILATION) -c $< -o $@

clean:
		rm -f *.o
fclean: clean
		rm -f libftprintf.a
re: fclean all


