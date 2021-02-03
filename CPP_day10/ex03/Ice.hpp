/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Ice_H
#define Ice_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
    Ice();
    ~Ice();
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif