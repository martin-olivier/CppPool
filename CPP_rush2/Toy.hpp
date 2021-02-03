/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Toy_H
#define Toy_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Object.hpp"

class Toy : public Object
{
protected:
public:
    Toy(const std::string &name);
    ~Toy();
    virtual void isTaken(void) = 0;
};

#endif