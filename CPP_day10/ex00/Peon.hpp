/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Peon_H
#define Peon_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(std::string name);
    ~Peon();
    void getPolymorphed() const override;
};

#endif