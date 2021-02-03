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
    std::string m_name;
    int _vitamins;
public:
    Fruit(std::string const &name, int vitamins);
    virtual ~Fruit();
    int getVitamins() const;
    const std::string &getName() const;
    Fruit& operator=(Fruit const& fruit);
};

#endif