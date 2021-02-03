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

typedef bool AttackRange;

class Character
{
protected:
    const std::string m_name;
    int m_level;
    int m_PV;
    int m_energy;

    int m_strength;
    int m_stamina;
    int m_intelligence;
    int m_spirit;
    int m_agility;
public:
    Character(const std::string &name, int level);
    ~Character();
    //
    const std::string &getName() const;
    int getLvl() const;
    int getPv() const;
    int getPower() const;
    //
    virtual int CloseAttack();
    virtual void Heal();
    virtual int RangeAttack();
    virtual void RestorePower();
    //
    void TakeDamage(int damage);
    //
    AttackRange Range;
    const static AttackRange CLOSE;
    const static AttackRange RANGE;
};

#endif