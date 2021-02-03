/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Character.hpp"

const AttackRange Character::CLOSE = 0;
const AttackRange Character::RANGE = 1;

Character::Character(const std::string &name, int level) : m_name(name)
{
    std::cout << name << " Created" << std::endl;
    m_level = level;
    m_PV = 100;
    m_energy = 100;

    m_strength = 5;
    m_stamina = 5;
    m_intelligence = 5;
    m_spirit = 5;
    m_agility = 5;

    Range = Character::CLOSE;
}

Character::~Character()
{
}

const std::string &Character::getName() const
{
    return m_name;
}

int Character::getLvl() const
{
    return m_level;
}

int Character::getPv() const
{
    return m_PV;
}

int Character::getPower() const
{
    return m_energy;
}

int Character::CloseAttack()
{
    if (this->Range == Character::RANGE)
        return 0;
    if (m_energy >= 10) {
        m_energy -= 10;
        std::cout << m_name << " strikes with a wooden stick" << std::endl;
        return m_strength + 10;
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}

void Character::Heal()
{
    m_PV += 50;
    if (m_PV > 100)
        m_PV = 100;
    std::cout << m_name << " takes a potion" << std::endl;
}

int Character::RangeAttack()
{
    if (m_energy >= 10) {
        m_energy -= 10;
        std::cout << m_name << " tosses a stone" << std::endl;
        return m_strength + 5;
    }
    else
        std::cout << m_name << " out of power" << std::endl;
    return 0;
}

void Character::RestorePower()
{
    m_energy = 100;
    std::cout << m_name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    int after = m_PV - damage;

    if (after <= 0) {
        std::cout << m_name << " out of combat" << std::endl;
        m_PV = 0;
        return;
    }
    std::cout << m_name << " takes " << damage << " damage" << std::endl;
    m_PV -= damage;
}