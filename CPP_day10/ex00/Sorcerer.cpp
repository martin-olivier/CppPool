/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Sorcerer.hpp"
#include "Victim.hpp"

std::ostream& operator<<(std::ostream &flux, const Sorcerer &a)
{
    flux << "I am " << a.get_name() << ", " << a.get_title() << ", and I like ponies!" << std::endl;
    return flux;
}

Sorcerer::Sorcerer(std::string name, std::string title) : m_name(name), m_title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::get_name(void) const
{
    return m_name;
}

std::string Sorcerer::get_title(void) const
{
    return m_title;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}