/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    m_xp += 10;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}