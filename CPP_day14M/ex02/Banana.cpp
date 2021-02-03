/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Banana.hpp"

Banana::Banana() : Fruit(5)
{
}

Banana::~Banana()
{

}

std::string Banana::getName() const
{
    return "banana";
}