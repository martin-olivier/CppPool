/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(const std::string &name) : Toy(name)
{
}

LittlePony::~LittlePony()
{
}

void LittlePony::isTaken(void)
{
    std::cout << "yo man" << std::endl;
}