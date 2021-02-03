/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
    m_output = "* piouuu piouuu piouuu *";
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack() const
{
    std::cout << m_output << std::endl;
}