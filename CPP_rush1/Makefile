##
## EPITECH PROJECT, 2021
## Visual Studio Live Share (Workspace)
## File description:
## Makefile
##

UTNAME	=	unit_tests

###################    UNIT TESTS FILES    ###########################################################################

UTSRC	=	array.c\
			char.c\
			float.c\
			int.c\
			new.c\
			player.c\
			point.c\
			vertex.c\
			$(addprefix tests/, \
			test_ex04.c \
			test_vertex_points.c\
			)

######################################################################################################################

CPPFLAGS = -I./
LDFLAGS =

###################    UNIT TESTS RULES    ###########################################################################

tests_run:	LDFLAGS += -lcriterion --coverage
tests_run:
		@$(CC) -o $(UTNAME) $(UTSRC) $(CPPFLAGS) $(LDFLAGS)
		./unit_tests
		@echo -e "$(GREEN)gcovr --exclude tests/$(END)" && gcovr --exclude tests/
		@echo -e "$(GREEN)gcovr --branches --exclude tests/$(END)" && gcovr --branches --exclude tests/
		@echo -e "$(GREEN)* * * * * * * * * * * * * * TESTS COMPLETED * * * * * * * * * * * * * *$(END)"

######################################################################################################################

.PHONY:	tests_run
