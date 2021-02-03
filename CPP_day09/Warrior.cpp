/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character(name, level)
{
    m_level = level;
    m_PV = 100;
    m_energy = 100;

    m_strength = 12;
    m_stamina = 12;
    m_intelligence = 6;
    m_spirit = 5;
    m_agility = 7;
    m_weaponName = "hammer";

    Range = Character::CLOSE;

    std::cout << "I'm " << name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack(void)
{
    if (this->Range == Character::RANGE)
        return 0;
    if (m_energy >= 30) {
        m_energy -= 30;
        std::cout << m_name << " strikes with his " << m_weaponName << std::endl;
        return m_strength + 20;
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}

int Warrior::RangeAttack(void)
{
    if (this->Range == Character::CLOSE)
        return 0;
    if (m_energy >= 10) {
        m_energy -= 10;
        std::cout << m_name << " intercepts" << std::endl;
        this->Range = Character::CLOSE;
        return 0;
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}