/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef PowerFist_H
#define PowerFist_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
    std::string m_output;
public:
    PowerFist();
    ~PowerFist();
    void attack() const;
};

#endif