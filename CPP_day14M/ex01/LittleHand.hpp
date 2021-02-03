/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef LittleHand_H
#define LittleHand_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "FruitBox.hpp"
#include "Lime.hpp"
#include "Banana.hpp"

class LittleHand
{
public:
    static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
};

#endif