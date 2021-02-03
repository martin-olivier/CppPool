/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Box_H
#define Box_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Wrap.hpp"

class Box : public Wrap
{
protected:
public:
    Box(const std::string &name = "Box");
    ~Box();
    void wrapMeThat(Object *obj) override;
};

#endif