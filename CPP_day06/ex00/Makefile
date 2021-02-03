##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = my_cat

CFLAGS = -Wall -Wextra -Werror

CC = g++

all :	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
