/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Character_H
#define Character_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
protected:
    std::string m_name;
    std::vector<AMateria*> m_inventory;
public:
    Character(const std::string &name);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif