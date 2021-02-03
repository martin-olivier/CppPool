/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
    m_name = name;
    m_apcost = apcost;
    m_damage = damage;
}

AWeapon::~AWeapon()
{
}

std::string AWeapon::getName() const
{
    return m_name;
}

int AWeapon::getAPCost() const
{
    return m_apcost;
}

int AWeapon::getDamage() const
{
    return m_damage;
}

void AWeapon::attack() const
{

}