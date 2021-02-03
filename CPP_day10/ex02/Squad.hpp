/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Squad_H
#define Squad_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
    std::vector<ISpaceMarine *> m_array;
public:
    Squad();
    Squad(const Squad &add);
    ~Squad();
    int getCount() const override;
    ISpaceMarine* getUnit(int i) override;
    int push(ISpaceMarine *add) override;
    std::vector<ISpaceMarine *>get_vector(void);
};

#endif