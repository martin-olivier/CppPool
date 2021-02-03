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

#include "SystemData.hpp"

void MyGKrellm_terminal(SystemData);
void MyGKrellm_graphical(SystemData);

class MyGKrellm
{
private:
    bool m_display;
    SystemData m_data;
public:
    MyGKrellm(int ac, char **av);
    ~MyGKrellm();
    void display_usage() const;
    int start();
    void dump() const;
};

#endif