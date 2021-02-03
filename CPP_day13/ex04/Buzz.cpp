/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &filename) : Toy(Toy::BUZZ, name, filename)
{
}

Buzz::~Buzz()
{
}

void Buzz::speak(const std::string &statement)
{
    std::cout << "BUZZ: " << m_name << " \"" << statement << "\"" << std::endl;
}