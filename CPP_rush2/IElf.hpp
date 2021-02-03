/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef IElf_H
#define IElf_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Object.hpp"
#include "PapaXmasTable.hpp"
#include "PapaXmasConveyorBelt.hpp"

class IElf
{
protected:
public:
    virtual void wrap(Wrap *emballage, size_t index) = 0;
    virtual void open(Wrap *emballage) = 0;
    virtual void close(Wrap *emballage) = 0;
    virtual void in(void) = 0;
    virtual void out(void) = 0;
    virtual std::string *look(void) = 0;
    virtual void put() = 0;
    virtual void take() = 0;
};

#endif