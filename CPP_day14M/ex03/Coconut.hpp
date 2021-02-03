/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Coconut_H
#define Coconut_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Fruit.hpp"

class Coconut : public Fruit
{
public:
    Coconut();
    ~Coconut();
    std::string getName() const override;
};

#endif