##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	menger.c	\
		main.c

OBJ = $(SRC:.c=.o)

NAME = menger

CFLAGS = -std=gnu11 -Wall -Wextra

CC = gcc

all :	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	rm *.o

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
