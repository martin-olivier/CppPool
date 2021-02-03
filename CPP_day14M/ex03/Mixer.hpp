/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Mixer_H
#define Mixer_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "FruitBox.hpp"
#include "Lime.hpp"
#include "Banana.hpp"
#include "Coconut.hpp"

#include "MixerBase.hpp"

class Mixer : public MixerBase
{
private:
public:
    Mixer();
    ~Mixer();
    void activate();
    static int lets_mix(FruitBox &fruits);
};

#endif