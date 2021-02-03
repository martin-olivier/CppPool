/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Banana_H
#define Banana_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Fruit.hpp"

class Banana : public Fruit
{
private:
public:
    Banana();
    ~Banana();
    std::string getName() const override;
};

#endif