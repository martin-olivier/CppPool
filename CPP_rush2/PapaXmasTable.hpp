/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef PapaXmasTable_H
#define PapaXmasTable_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "ITable.hpp"
#include "Teddy.hpp"
#include "LittlePony.hpp"

class PapaXmasTable : public ITable
{
protected:
    std::vector<Object*> m_content;
    bool m_collapse;
public:
    PapaXmasTable();
    virtual ~PapaXmasTable();
    void get_object(IConveyorBelt *tapis);
    void put_object(IConveyorBelt *tapis, size_t pos);
    std::vector<Object*> get_content(void);
};

#endif