/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef AEnemy_H
#define AEnemy_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class AEnemy
{
protected:
    int m_HP;
    std::string m_type;
public:
    AEnemy(int hp, const std::string &type);
    virtual ~AEnemy();
    virtual void takeDamage(int damage);
    std::string getType() const;
    int getHP() const;
};

#endif