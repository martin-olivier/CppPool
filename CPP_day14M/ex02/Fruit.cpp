/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins) : _vitamins(vitamins)
{

}

Fruit::~Fruit()
{

}

int Fruit::getVitamins() const
{
    return _vitamins;
}

Fruit& Fruit::operator=(Fruit const& fruit)
{
    _vitamins = fruit._vitamins;
    return *this;
}