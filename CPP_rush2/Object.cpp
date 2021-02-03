/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Object.hpp"

Object::Object(const std::string &name) : m_name(name)
{
}

Object::~Object()
{
    
}

const std::string &Object::get_name(void) const
{
    return m_name;
}

std::ostream& operator<<(std::ostream &flux, const Object &obj)
{
    flux << obj.get_name();
    return flux;
}