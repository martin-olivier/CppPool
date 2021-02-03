/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Buzz_H
#define Buzz_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Toy.hpp"

class Buzz : public Toy
{
private:
public:
    Buzz(const std::string &name, const std::string &filename = "buzz.txt");
    ~Buzz();
    bool speak(const std::string &statement) override;
    bool speak_es(const std::string &statement) override;
};

#endif