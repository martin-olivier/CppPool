/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef AssaultTerminator_H
#define AssaultTerminator_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
public:
    AssaultTerminator();
    ~AssaultTerminator();
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif