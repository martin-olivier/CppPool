/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Character.hpp"

Character::Character(const std::string &name) : ICharacter(), m_name(name)
{

}

Character::~Character()
{

}

std::string const& Character::getName() const
{
    return m_name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    if (m_inventory.size() == 4)
        return;
    m_inventory.push_back(m);
}

void Character::unequip(int idx)
{
    if (idx > (int)m_inventory.size() - 1)
        return;
    m_inventory.erase((m_inventory.begin() + idx));
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > m_inventory.size() - 1)
        return;
    m_inventory[idx]->use(target);
}