/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
    m_output = "* pschhh... SBAM! *";
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack() const
{
    std::cout << m_output << std::endl;
}