# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-ket <rvan-ket@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/20 16:44:27 by rvan-ket       #+#    #+#                 #
#    Updated: 2019/02/01 12:08:48 by rvan-ket      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c \
        ft_memmove.c \
        ft_strcpy.c \
        ft_strncpy.c \
        ft_memcpy.c \
        ft_memccpy.c \
        ft_strlen.c \
        ft_memdel.c \
        ft_strsplit.c \
        ft_bzero.c \
        ft_memalloc.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strdup.c \
        ft_strcat.c \
        ft_strncat.c \
        ft_strlcat.c \
        ft_strrchr.c \
        ft_strchr.c \
        ft_strstr.c \
        ft_strncmp.c \
        ft_strnstr.c \
        ft_strcmp.c \
        ft_atoi.c \
        ft_isalnum.c \
        ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_tolower.c \
        ft_toupper.c \
        ft_strnew.c \
        ft_strdel.c \
        ft_striter.c \
        ft_striteri.c \
        ft_putstr_fd.c \
        ft_putchar_fd.c \
        ft_putnbr_fd.c \
        ft_putendl_fd.c \
        ft_strclr.c \
        ft_strmap.c \
        ft_strmapi.c \
        ft_strequ.c \
        ft_strnequ.c \
        ft_putchar.c \
        ft_putstr.c \
        ft_putendl.c \
        ft_putnbr.c \
        ft_strsub.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_itoa.c \
        ft_lstnew.c \
        ft_lstdelone.c \
        ft_lstdel.c \
        ft_lstadd.c \
        ft_lstiter.c \
        ft_lstmap.c \
      	ft_countwords.c \
	ft_sqrt.c \
        ft_lstaddback.c \
	ft_lstlen.c \
	ft_powerof.c \

OBJ = ft_memset.o \
        ft_memmove.o \
        ft_strcpy.o \
        ft_strncpy.o \
        ft_memcpy.o \
        ft_memccpy.o \
        ft_strlen.o \
        ft_memdel.o \
        ft_strsplit.o \
        ft_bzero.o \
        ft_memalloc.o \
        ft_memchr.o \
        ft_memcmp.o \
        ft_strdup.o \
        ft_strcat.o \
        ft_strncat.o \
        ft_strlcat.o \
        ft_strrchr.o \
        ft_strchr.o \
        ft_strstr.o \
        ft_strncmp.o \
        ft_strnstr.o \
        ft_strcmp.o \
        ft_atoi.o \
        ft_isalnum.o \
        ft_isalpha.o \
        ft_isascii.o \
        ft_isdigit.o \
        ft_isprint.o \
        ft_tolower.o \
        ft_toupper.o \
        ft_strnew.o \
        ft_strdel.o \
        ft_striter.o \
        ft_striteri.o \
        ft_putstr_fd.o \
        ft_putchar_fd.o \
        ft_putnbr_fd.o \
        ft_putendl_fd.o \
        ft_strclr.o \
        ft_strmap.o \
        ft_strmapi.o \
        ft_strequ.o \
        ft_strnequ.o \
        ft_putchar.o \
        ft_putstr.o \
        ft_putendl.o \
        ft_putnbr.o \
        ft_strsub.o \
        ft_strjoin.o \
        ft_strtrim.o \
        ft_itoa.o \
        ft_lstnew.o \
        ft_lstdelone.o \
        ft_lstdel.o \
        ft_lstadd.o \
        ft_lstiter.o \
        ft_lstmap.o \
        ft_countwords.o \
	ft_countwords.o \
	ft_sqrt.o \
	ft_lstaddback.o \
	ft_lstlen.o \
	ft_powerof.o \


HEADER = libft.h

all: $(NAME)

$(NAME):
		@echo make .o files
		@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
		@echo make libft.a
		@ar rc $(NAME) $(OBJ)

clean:
		@echo removing objects
		@rm -f $(OBJ)
		@echo done

fclean: clean
		@echo removing name
		@rm -f $(NAME)
		@rm -f a.out
		@echo done

re: fclean all
