/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ToyStory_H
#define ToyStory_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Toy.hpp"

class ToyStory
{
private:
public:
    ToyStory();
    ~ToyStory();
    static void tellMeAStory(const std::string &filename, Toy &toy1, bool (Toy:: *func1)(const std::string &), Toy &toy2, bool (Toy:: *func2)(const std::string &));
};

#endif