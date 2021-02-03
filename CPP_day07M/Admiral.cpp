/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Admiral.hpp"

Federation::Starfleet::Admiral::Admiral(std::string name)
{
    _name = name;
    movePtr = &Federation::Starfleet::Ship::move;
    firePtr = &Federation::Starfleet::Ship::fire;
    std::cout << "Admiral " << _name << " ready for action." << std::endl;
}

Federation::Starfleet::Admiral::Admiral::~Admiral()
{
}

bool Federation::Starfleet::Admiral::Admiral::move(Federation::Starfleet::Ship *ship, Destination dest)
{
    return (ship->*movePtr)(dest);
}

void Federation::Starfleet::Admiral::Admiral::fire(Federation::Starfleet::Ship *ship, Borg::Ship *target)
{
    std::cout << "On order from Admiral " << _name << ":" << std::endl;
    (ship->*firePtr)(target);
}