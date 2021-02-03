/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "BorgQueen.hpp"

Borg::BorgQueen::BorgQueen()
{
    movePtr = &Borg::Ship::move;
    firePtr = &Borg::Ship::fire;
    destroyPtr = &Borg::Ship::fire;
}
    
Borg::BorgQueen::~BorgQueen()
{
}

void Borg::BorgQueen::destroy(Borg::Ship *ship, Federation::Ship *target)
{
    (ship->*destroyPtr)(target);
}

void Borg::BorgQueen::fire(Borg::Ship *ship, Federation::Starfleet::Ship *target)
{
    (ship->*firePtr)(target);
}

bool Borg::BorgQueen::move(Borg::Ship *ship, Destination dest)
{
    return (ship->*movePtr)(dest);
}