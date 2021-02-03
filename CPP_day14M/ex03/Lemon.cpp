/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Lemon.hpp"

Lemon::Lemon(int vitamins) : Fruit(vitamins)
{
}

Lemon::Lemon() : Fruit(3)
{
}

Lemon::~Lemon()
{
}

std::string Lemon::getName() const
{
    return "lemon";
}