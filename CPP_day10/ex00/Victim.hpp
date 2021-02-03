/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Victim_H
#define Victim_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Victim
{
protected:
    std::string m_name;
public:
    Victim(std::string name);
    ~Victim();
    std::string get_name(void) const;
    virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream &flux, const Victim &a);

#endif