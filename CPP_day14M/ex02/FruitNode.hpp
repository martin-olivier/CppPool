/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef FruitNode_H
#define FruitNode_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitNode
{
private:
public:
    FruitNode *next;
    Fruit *data;
    FruitNode(Fruit *fruit) : next(nullptr), data(fruit)
    {

    }
};

#endif