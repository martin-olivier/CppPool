/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ConveyorBeltRand_H
#define ConveyorBeltRand_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "PapaXmasConveyorBelt.hpp"
#include "GiftPaper.hpp"
#include "Box.hpp"

class ConveyorBeltRand : public PapaXmasConveyorBelt
{
public:
    ConveyorBeltRand();
    ~ConveyorBeltRand();
    void in_button(void);
    void out_button(void);
};

#endif