/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Character.hpp"

Character::Character(std::string name)
{
    m_name = name;
    m_AP = 40;
    m_weapon = nullptr;
}

Character::~Character()
{
}

void Character::recoverAP()
{
    m_AP += 10;
    if (m_AP > 40)
        m_AP = 40;
}

void Character::equip(AWeapon *weapon)
{
    m_weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (!m_weapon)
        return;
    if (!enemy)
        return;
    if (m_AP < m_weapon->getAPCost())
        return;
    enemy->takeDamage(m_weapon->getDamage());
    std::cout << m_name << " attacks " << enemy->getType() << " with a " << m_weapon->getName() << std::endl;
    m_AP -= m_weapon->getAPCost();
    m_weapon->attack();
    if (enemy->getHP() <= 0)
        delete enemy;
}

std::string Character::getName() const
{
    return m_name;
}

AWeapon *Character::getWeapon() const
{
    return m_weapon;
}

int Character::getAP() const
{
    return m_AP;
}

std::ostream& operator<<(std::ostream &flux, const Character &a)
{
    if (a.getWeapon())
        flux << a.getName() << " has " << a.getAP() << " AP and wields a " << a.getWeapon()->getName() << std::endl;
    else
        flux << a.getName() << " has " << a.getAP() << " AP and is unarmed" << std::endl;
    return flux;
}