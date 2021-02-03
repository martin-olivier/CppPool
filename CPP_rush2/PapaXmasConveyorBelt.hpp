/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef PapaXmasConveyorBelt_H
#define PapaXmasConveyorBelt_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "IConveyorBelt.hpp"
#include "Wrap.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt
{
protected:
    Object* m_obj;
public:
    PapaXmasConveyorBelt();
    ~PapaXmasConveyorBelt();
    Object *get_object(void);
    bool set_object(Object *);
    void in_button(void);
    void out_button(void);
    void set_empty(void);
};

#endif