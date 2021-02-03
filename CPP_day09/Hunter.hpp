/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Hunter_x_Hunter_h
#define Hunter_x_Hunter_h

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Warrior.hpp"

class Hunter : virtual public Warrior
{
private:
public:
    Hunter(const std::string &name, int level);
    ~Hunter();
    int RangeAttack();
    void RestorePower();
};

#endif