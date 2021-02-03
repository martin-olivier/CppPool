/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Sorcerer_H
#define Sorcerer_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Victim.hpp"

class Sorcerer
{
private:
    std::string m_name;
    std::string m_title;
public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    std::string get_name(void) const;
    std::string get_title(void) const;
    void polymorph(const Victim &victim) const;
};

std::ostream& operator<<(std::ostream &flux, const Sorcerer &a);

#endif