/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef PlasmaRifle_H
#define PlasmaRifle_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
    std::string m_output;
public:
    PlasmaRifle();
    ~PlasmaRifle();
    void attack() const;
};

#endif