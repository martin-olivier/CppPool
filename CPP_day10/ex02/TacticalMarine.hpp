/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef TacticalMarine_H
#define TacticalMarine_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
public:
    TacticalMarine();
    ~TacticalMarine();
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif