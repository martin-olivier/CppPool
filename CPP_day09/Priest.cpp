/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    m_level = level;
    m_PV = 100;
    m_energy = 100;

    m_strength = 4;
    m_stamina = 4;
    m_intelligence = 42;
    m_spirit = 21;
    m_agility = 2;

    Range = Character::CLOSE;

    std::cout << name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack(void)
{
    if (this->Range == Character::RANGE)
        return 0;
    if (m_energy >= 10) {
        m_energy -= 10;
        this->Range = Character::RANGE;
        std::cout << m_name << " uses a spirit explosion" << std::endl;
        return (10 + m_spirit);
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}

void Priest::Heal(void)
{
    if (m_energy >= 10) {
        m_energy -= 10;
        m_PV += 70;
        if (m_PV > 100)
            m_PV = 100;
        std::cout << m_name << " casts a little heal spell" << std::endl;
    }
    else
        std::cout << m_name << " out of power" << std::endl;
}