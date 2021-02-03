/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Paladin_H
#define Paladin_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin : virtual public Warrior, virtual public Priest
{
private:
public:
    Paladin(const std::string &name, int level);
    ~Paladin();
    int Intercept(void);
    int CloseAttack(void);
    int RangeAttack(void);
    void Heal(void);
    void RestorePower(void);
};

#endif