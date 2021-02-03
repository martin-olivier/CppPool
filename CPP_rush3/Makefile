##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	main.cpp	\
		module/MonitorCore.cpp	\
		module/MonitorOs.cpp	\
		module/MonitorRam.cpp	\
		module/MonitorNet.cpp	\
		module/MonitorNetInterface.cpp	\
		module/MonitorProcessList.cpp	\
		module/MyGKrellm.cpp	\
		module/SystemData.cpp	\
		module/Utils.cpp	\
		terminal/MyGKrellm_terminal.cpp	\
		terminal/print_terminal.cpp	\
		graphical/MyGKrellm_graphical.cpp \
		graphical/ElementGraph.cpp	\
		graphical/DisplayOS.cpp	\
		graphical/DisplayCPU.cpp	\
		graphical/DisplayRAM.cpp	\
		graphical/TabBar.cpp	\
		graphical/Button.cpp	\

OBJ = $(SRC:.cpp=.o)

NAME = MyGKrellm

CFLAGS = -std=c++11 -Wall -Wextra -Werror -lncurses -lsfml-graphics -lsfml-window -lsfml-system -lncurses

CC = g++

all :	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	rm *.o
	rm module/*.o
	rm terminal/*.o
	rm graphical/*.o

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
