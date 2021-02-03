/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Mixer.hpp"

Mixer::Mixer() : MixerBase()
{
    _plugged = false;
    _mixfunc = &Mixer::lets_mix;
}

Mixer::~Mixer()
{
}

void Mixer::activate()
{
    _plugged = true;
}

int Mixer::lets_mix(FruitBox &fruits)
{
    int vitamines_total = 0;

    while (fruits.nbFruits() != 0)
        vitamines_total += fruits.pickFruit()->getVitamins();

    return vitamines_total;
}