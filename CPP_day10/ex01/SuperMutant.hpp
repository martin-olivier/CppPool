/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef SuperMutant_H
#define SuperMutant_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "AEnemy.hpp"

class SuperMutant : public AEnemy
{
private:
public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int damage);
};

#endif