/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef GiftPaper_H
#define GiftPaper_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Wrap.hpp"

class GiftPaper : public Wrap
{
protected:
public:
    GiftPaper(const std::string &name = "GiftPaper");
    ~GiftPaper();
    void wrapMeThat(Object *obj) override;
};

#endif