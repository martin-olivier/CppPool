/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef FruitBox_H
#define FruitBox_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox
{
private:
    FruitNode *m_data;
    int m_size;
public:
    FruitBox(int size);
    ~FruitBox();
    int nbFruits() const;
    bool putFruit(Fruit *f);
    Fruit *pickFruit();
    FruitNode *head() const;
};

#endif