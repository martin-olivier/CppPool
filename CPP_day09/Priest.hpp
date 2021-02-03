/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Priest_H
#define Priest_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Mage.hpp"

class Priest : public Mage
{
private:
    /* data */
public:
    Priest(const std::string &name, int level);
    ~Priest();
    virtual int CloseAttack(void);
    void Heal(void);
};

#endif