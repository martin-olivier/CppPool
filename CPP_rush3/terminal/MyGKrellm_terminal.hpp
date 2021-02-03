/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MyGKrellm_H
#define MyGKrellm_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>

#include "../module/SystemData.hpp"
#include <curses.h>
#include <termios.h>
#include <term.h>
#include <unistd.h>

void MyGKrellm_terminal(SystemData);
void terminal_print_os(SystemData data);
void terminal_print_cpu(SystemData data);
void terminal_print_ram(SystemData data);
void terminal_print_net(SystemData data);
void terminal_print_proc(SystemData data);

#endif