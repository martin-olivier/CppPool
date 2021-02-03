/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Toy.hpp"

Toy::Toy() : m_type(BASIC_TOY), m_name("toy"), m_picture()
{
}

Toy::Toy(const Toy &copy) : m_type(copy.m_type), m_name(copy.m_name), m_picture(copy.m_picture)
{
}

Toy::Toy(ToyType type, const std::string &name, const std::string &filename) : m_type(type), m_name(name), m_picture(filename)
{
}

Toy::~Toy()
{
}

Toy::ToyType Toy::getType() const
{
    return m_type;
}

std::string Toy::getName() const
{
    return m_name;
}

void Toy::setName(const std::string &name)
{
    m_name = name;
}

bool Toy::setAscii(const std::string &filename)
{
    return m_picture.getPictureFromFile(filename);
}

std::string Toy::getAscii() const
{
    return m_picture.data;
}

Toy &Toy::operator=(const Toy &copy)
{
    m_type = copy.m_type;
    m_name = copy.m_name;
    m_picture = copy.m_picture;
    return *this;
}

void Toy::speak(const std::string &statement)
{
    std::cout << m_name << " \"" << statement << "\"" << std::endl;
}