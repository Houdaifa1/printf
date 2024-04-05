NAME1 = server
NAME2 = client

SRC1 = server.c
SRC2 = client.c ft_atoi.c

CFLAGS = -Wall -Wextra -Werror
FLAGS = ./ft_printf/libftprintf.a

all: $(NAME1) $(NAME2)

$(NAME1) : $(SRC1)
	cc $(CFLAGS) $(FLAGS) $(SRC1) -o $(NAME1)

$(NAME2) : $(SRC2)
	cc $(CFLAGS) $(FLAGS) $(SRC2) -o $(NAME2)

clean:

fclean:
	rm -rf $(NAME1) $(NAME2)

re: fclean all
