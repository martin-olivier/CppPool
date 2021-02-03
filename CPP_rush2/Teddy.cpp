/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Teddy.hpp"

Teddy::Teddy(const std::string &name) : Toy(name)
{
}
Teddy::~Teddy()
{
}

void Teddy::isTaken(void)
{
    std::cout << "gra hu" << std::endl;
}