/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    m_level = level;
    m_PV = 100;
    m_energy = 100;

    m_strength = 6;
    m_stamina = 6;
    m_intelligence = 12;
    m_spirit = 11;
    m_agility = 7;

    Range = Character::CLOSE;

    std::cout << name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack(void)
{
    if (this->Range == Character::RANGE)
        return 0;
    if (m_energy >= 10) {
        m_energy -= 10;
        this->Range = Character::RANGE;
        std::cout << m_name << " blinks" << std::endl;
        return 0;
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}

int Mage::RangeAttack(void)
{
    if (m_energy >= 25) {
        m_energy -= 25;
        std::cout << m_name << " launches a fire ball" << std::endl;
        return (20 + m_spirit);
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}

void Mage::RestorePower(void)
{
    m_energy += (50 + m_intelligence);
    if (m_energy > 100)
        m_energy = 100;
    std::cout << m_name << " takes a mana potion" << std::endl;
}