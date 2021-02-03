/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Teddy_H
#define Teddy_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Toy.hpp"

class Teddy : public Toy
{
private:
public:
    Teddy(const std::string &name = "Teddy");
    ~Teddy();
    void isTaken(void);
};

#endif