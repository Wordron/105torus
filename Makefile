##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC    =	main.c	\
			bissection.c	\
			newton.c	\
			secante.c	\
			function.c	\
			display.c


OBJ    =    $(SRC:.c=.o)

NAME	=	105torus

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lm

clean:
		rm $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all
