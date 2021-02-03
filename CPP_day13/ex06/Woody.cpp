/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &filename) : Toy(Toy::WOODY, name, filename)
{
}

Woody::~Woody()
{
}

bool Woody::speak(const std::string &statement)
{
    std::cout << "WOODY: " << m_name << " \"" << statement << "\"" << std::endl;
    return true;
}

bool Woody::speak_es(const std::string &statement)
{
    (void)(statement);
    m_error.m_where = "speak_es";
    m_error.m_what = "wrong mode";
    m_error.type = Toy::Error::ErrorType::SPEAK;
    return false;
}