/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Woody_H
#define Woody_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Toy.hpp"

class Woody : public Toy
{
private:
public:
    Woody(const std::string &name, const std::string &filename = "woody.txt");
    ~Woody();
    void speak(const std::string &statement) override;
};

#endif