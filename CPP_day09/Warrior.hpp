/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Warrior_H
#define Warrior_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Character.hpp"

class Warrior : virtual public Character
{
protected:
    std::string m_weaponName;
public:
    Warrior(const std::string &name, int level);
    ~Warrior();
    int CloseAttack();
    virtual int RangeAttack();
};

#endif