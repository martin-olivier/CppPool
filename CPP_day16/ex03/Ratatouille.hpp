/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Ratatouille_H
#define Ratatouille_H

#include <iostream>
#include <sstream>

class Ratatouille
{
private:
    std::ostringstream m_data;
public:
    Ratatouille();
    Ratatouille(Ratatouille const &other);
    ~Ratatouille();
    Ratatouille &operator=(const Ratatouille &rhs);
    Ratatouille &addVegetable(unsigned char);
    Ratatouille &addCondiment(unsigned int);
    Ratatouille &addSpice(double);
    Ratatouille &addSauce(const std::string &);
    std::string kooc();
};

#endif