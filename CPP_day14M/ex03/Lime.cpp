/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Lime.hpp"

Lime::Lime() : Lemon(2)
{
}

Lime::~Lime()
{
}

std::string Lime::getName() const
{
    return "lime";
}