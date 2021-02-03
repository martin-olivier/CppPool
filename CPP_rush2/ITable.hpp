/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ITable_H
#define ITable_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Object.hpp"
#include "IConveyorBelt.hpp"

class ITable
{
private:
public:
    virtual void get_object(IConveyorBelt *) = 0;
    virtual void put_object(IConveyorBelt *, size_t) = 0;
    virtual std::vector<Object*> get_content() = 0;
};

#endif