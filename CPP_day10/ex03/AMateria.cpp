/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : m_type(type)
{
    m_xp = 0;
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType() const
{
    return m_type;
}

unsigned int AMateria::getXP() const
{
    return m_xp;
}

void AMateria::use(ICharacter &target)
{
    
}