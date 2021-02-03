##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=		init.c				\
				assign.c			\
				at.c				\
				copy.c				\
				find.c				\
				utils.c				\
				insert.c			\
				last.c				\

OBJ = $(SRC:.c=.o)

NAME = libstring.a

all: $(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	rm *.o

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

auteur:
	echo $(USER) > auteur

.PHONY: all clean fclean re
