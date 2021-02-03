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

#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character
{
private:
    std::string m_name;
    int m_AP;
    AWeapon *m_weapon;
public:
    Character(std::string name);
    ~Character();
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(AEnemy *enemy);
    std::string getName() const;
    AWeapon *getWeapon() const;
    int getAP() const;
};

std::ostream& operator<<(std::ostream &flux, const Character &a);

#endif