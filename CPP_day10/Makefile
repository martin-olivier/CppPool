##
## EPITECH PROJECT, 2021
## Visual Studio Live Share (Workspace)
## File description:
## Makefile
##

UTNAME	=	unit_tests

UTSRC	=	ex01/AEnemy.cpp\
			ex01/AWeapon.cpp\
			ex01/Character.cpp\
			ex01/PlasmaRifle.cpp\
			ex01/PowerFist.cpp\
			ex01/RadScorpion.cpp\
			ex01/SuperMutant.cpp\
			tests/test_ex01.cpp\

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
