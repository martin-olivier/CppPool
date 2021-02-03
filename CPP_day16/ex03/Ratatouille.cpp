/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Ratatouille.hpp"

Ratatouille::Ratatouille() : m_data("")
{
}

Ratatouille::Ratatouille(Ratatouille const &other)
{
    m_data << other.m_data.str();
}

Ratatouille::~Ratatouille()
{
}

Ratatouille &Ratatouille::operator=(const Ratatouille &rhs)
{
    m_data.str("");
    m_data << rhs.m_data.str();
    return *this;
}

Ratatouille &Ratatouille::addVegetable(unsigned char veg)
{
    m_data << veg;
    return *this;
}

Ratatouille &Ratatouille::addCondiment(unsigned int con)
{
    m_data << con;
    return *this;
}

Ratatouille &Ratatouille::addSpice(double spi)
{
    m_data << spi;
    return *this;
}

Ratatouille &Ratatouille::addSauce(const std::string &sau)
{
    m_data << sau;
    return *this;
}

std::string Ratatouille::kooc()
{
    return m_data.str();
}