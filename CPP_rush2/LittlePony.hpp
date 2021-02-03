/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef LittlePony_H
#define LittlePony_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Toy.hpp"

class LittlePony : public Toy
{
private:
public:
    LittlePony(const std::string &name = "LittlePony");
    ~LittlePony();
    void isTaken(void);
};

#endif