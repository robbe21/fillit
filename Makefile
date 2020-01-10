# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-ket <rvan-ket@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/17 17:42:44 by rvan-ket       #+#    #+#                 #
#    Updated: 2019/02/28 11:29:47 by rvan-ket      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = fillit

SRC = src/fillit.c src/ft_check.c src/ft_solve.c src/main.c \
	src/extra.c src/extra_two.c

OBJ = fillit.o ft_check.o ft_solve.o main.o extra.o extra_two.o

HEADER = fillit.h

FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME) -L$(LIBFT) -lft
clean:
	rm -rf $(OBJ)
	make clean -C $(LIBFT)
fclean:	clean
	rm -rf $(NAME)
	make fclean -C $(LIBFT)
re: fclean all