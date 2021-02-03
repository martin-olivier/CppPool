/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Lime_H
#define Lime_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Lemon.hpp"

class Lime : public Lemon
{
public:
    Lime();
    ~Lime();
    std::string getName() const override;
};

#endif