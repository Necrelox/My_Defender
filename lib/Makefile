##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

NAME	=	libmy

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strlen.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	= -I./../include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
