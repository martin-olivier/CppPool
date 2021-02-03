/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Fruit.hpp"

Fruit::Fruit(std::string const &name, int vitamins) : m_name(name), _vitamins(vitamins)
{

}

Fruit::~Fruit()
{

}

int Fruit::getVitamins() const
{
    return _vitamins;
}

const std::string &Fruit::getName() const
{
    return m_name;
}

Fruit& Fruit::operator=(Fruit const& fruit)
{
    m_name = fruit.m_name;
    _vitamins = fruit._vitamins;
    return *this;
}