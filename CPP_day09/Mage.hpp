/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Mage_H
#define Mage_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Character.hpp"

class Mage : virtual public Character
{
private:
public:
    Mage(const std::string &name, int level);
    ~Mage();
    int CloseAttack(void);
    int RangeAttack(void);
    virtual void RestorePower(void);
};

#endif