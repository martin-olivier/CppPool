/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef IConveyorBelt_H
#define IConveyorBelt_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Object.hpp"

class IConveyorBelt
{
private:
public:
    virtual Object *get_object(void) = 0;
    virtual bool set_object(Object *) = 0;
    virtual void in_button(void) = 0;
    virtual void out_button(void) = 0;
    virtual void set_empty(void) = 0;
};

#endif