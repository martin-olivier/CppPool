##
## EPITECH PROJECT, 2021
## Visual Studio Live Share (Workspace)
## File description:
## Makefile
##

UTNAME	=	unit_tests

UTSRC	=	ex05/Buzz.cpp\
			ex05/Picture.cpp\
			ex05/Toy.cpp\
			ex05/Woody.cpp\
			tests/test_ex05.cpp\

CPPFLAGS = -I./
LDFLAGS =

tests_run:	LDFLAGS += -lcriterion --coverage
tests_run:
		g++ -o $(UTNAME) $(UTSRC) $(CPPFLAGS) $(LDFLAGS)
		./unit_tests
		@echo -e "$(GREEN)gcovr --exclude tests/$(END)" && gcovr --exclude tests/
		@echo -e "$(GREEN)gcovr --branches --exclude tests/$(END)" && gcovr --branches --exclude tests/

clean:
	rm *.gcda
	rm *.gcno

.PHONY:	tests_run
