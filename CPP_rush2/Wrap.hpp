/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Wrap_H
#define Wrap_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Object.hpp"

class Wrap : public Object
{
protected:
    bool m_is_open;
    Object *m_obj;
public:
    Wrap(const std::string &name);
    ~Wrap();
    virtual void wrapMeThat(Object *obj);
    Object *unWrapMeThat(void);
    void openMe(void);
    void closeMe(void);
    bool is_open(void); // en plus du sujet
};

#endif