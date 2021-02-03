/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    m_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a pink pony!" << std::endl;
}