/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level) : Character(name, level), Warrior(name, level), Priest(name, level)
{
    std::cout << "the light falls on " << name << std::endl;
    m_level = level;
    m_PV = 100;
    m_energy = 100;

    m_strength = 9;
    m_stamina = 10;
    m_intelligence = 10;
    m_spirit = 10;
    m_agility = 2;

    Range = Character::CLOSE;
}

Paladin::~Paladin()
{
}

int Paladin::Intercept(void)
{
    return (Warrior::RangeAttack());
}

int Paladin::CloseAttack(void)
{
    return (Warrior::CloseAttack());
}

int Paladin::RangeAttack(void)
{
    return (Priest::RangeAttack());
}

void Paladin::Heal(void)
{
    Priest::Heal();
}

void Paladin::RestorePower(void)
{
    Warrior::RestorePower();
}