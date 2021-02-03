/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    m_xp += 10;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}