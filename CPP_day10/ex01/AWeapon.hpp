/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef AWeapon_H
#define AWeapon_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class AWeapon
{
protected:
    std::string m_name;
    int m_apcost;
    int m_damage;
public:
    AWeapon(const std::string &name, int apcost, int damage);
    virtual ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif