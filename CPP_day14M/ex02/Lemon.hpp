/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Lemon_H
#define Lemon_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Fruit.hpp"

class Lemon : public Fruit
{
protected:
    Lemon(int vitamins);
public:
    Lemon();
    ~Lemon();
    std::string getName() const override;
};

#endif