/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type)
{
    m_HP = hp;
    m_type = type;
}

AEnemy::~AEnemy()
{
}

void AEnemy::takeDamage(int damage)
{
    if (damage <= 0)
        return;
    m_HP -= damage;
}

std::string AEnemy::getType() const
{
    return m_type;
}

int AEnemy::getHP() const
{
    return m_HP;
}