/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MyGKrellm_terminal.hpp"

int apply_input(int key, int window, int &index)
{
    if (key == 'q')
        return (0);
    if (key == 260) {
        index--;
        if (index < 0)
            index = 4;
    }
    if (key == 261) {
        index++;
        if (index > 4)
            index = 0;
    }
    return (window);
}

void initialize_ncurses()
{
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    timeout(1000);
    curs_set(FALSE);
    srand(time(NULL));
}

void game_checks(SystemData data, int index)
{
    if (index == 0)
        terminal_print_os(data);
    if (index == 1)
        terminal_print_cpu(data);
    if (index == 2)
        terminal_print_ram(data);
    if (index == 3)
        terminal_print_net(data);
    if (index == 4)
        terminal_print_proc(data);
}

void MyGKrellm_terminal(SystemData data)
{
    int window = 1;
    int key;
    int index = 0;

    initialize_ncurses();
    while (window == 1) {
        data.refresh();
        game_checks(data, index);
        key = 0;
        key = getch();
        window = apply_input(key, window, index);
        refresh();
        clear();
    }
    endwin();
}