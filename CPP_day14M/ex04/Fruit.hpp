/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Fruit_H
#define Fruit_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Fruit
{
protected:
    int _vitamins;
public:
    Fruit(int vitamins);
    virtual ~Fruit();
    int getVitamins() const;
    virtual std::string getName() const = 0;
    Fruit& operator=(Fruit const& fruit);
};

#endif