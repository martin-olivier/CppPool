/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef AMateria_H
#define AMateria_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "ICharacter.hpp"

class AMateria
{
protected:
    unsigned int m_xp;
    const std::string m_type;
public:
    AMateria(const std::string &type);
    ~AMateria();
    const std::string &getType() const;
    unsigned int getXP() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif