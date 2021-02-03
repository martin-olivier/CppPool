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

bool Buzz::speak(const std::string &statement)
{
    std::cout << "BUZZ: " << m_name << " \"" << statement << "\"" << std::endl;
    return true;
}

bool Buzz::speak_es(const std::string &statement)
{
    std::cout << "BUZZ: " << m_name << " senorita \"" << statement << "\" senorita" << std::endl;
    return true;
}