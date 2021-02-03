/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef PapaXmasElf_H
#define PapaXmasElf_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "IElf.hpp"

class PapaXmasElf : public IElf
{
private:
    PapaXmasConveyorBelt *m_tapis;
    PapaXmasTable *m_table;
    Wrap *m_wrap_in_hand;
public:
    PapaXmasElf(PapaXmasTable *table, PapaXmasConveyorBelt *tapis);
    ~PapaXmasElf();
    void wrap(Wrap *emballage, size_t index);
    void open(Wrap *emballage);
    void close(Wrap *emballage);
    void in(void);
    void out(void);
    std::string *look(void);
    void put();
    void take();
    Wrap *get_in_hands(void);
};

#endif