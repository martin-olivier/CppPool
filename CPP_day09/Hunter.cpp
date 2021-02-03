/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level)
{
    std::cout << name << " is born from a tree" << std::endl;
    m_level = level;
    m_PV = 100;
    m_energy = 100;

    m_strength = 9;
    m_stamina = 9;
    m_intelligence = 5;
    m_spirit = 6;
    m_agility = 25;
    m_weaponName = "sword";

    Range = Character::CLOSE;
}

Hunter::~Hunter()
{
}

int Hunter::RangeAttack()
{
    if (m_energy >= 25) {
        m_energy -= 25;
        std::cout << m_name << " uses his bow" << std::endl;
        return (20 + m_agility);
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}

void Hunter::RestorePower(void)
{
    m_energy = 100;
    std::cout << m_name << " meditates" << std::endl;
}