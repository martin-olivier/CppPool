/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    m_name = name;
    std::cout << "Some random victim called " << name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << m_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::get_name(void) const
{
    return m_name;
}

void Victim::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream &flux, const Victim &a)
{
    flux << "I'm " << a.get_name() << " and I like otters!" << std::endl;
    return flux;
}