##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	z.c

OBJ = $(SRC:.c=.o)

NAME = z

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
