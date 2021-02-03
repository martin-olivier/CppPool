/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Cure_H
#define Cure_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
    Cure();
    ~Cure();
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif