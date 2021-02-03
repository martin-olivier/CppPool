/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Coconut.hpp"

Coconut::Coconut() : Fruit(15)
{
}

Coconut::~Coconut()
{
}

std::string Coconut::getName() const
{
    return "coconut";
}