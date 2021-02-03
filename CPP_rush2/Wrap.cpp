/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Wrap.hpp"

Wrap::Wrap(const std::string &name) : Object(name)
{
    m_is_open = true;
    m_obj = nullptr;
}

Wrap::~Wrap()
{

}

void Wrap::wrapMeThat(Object *obj)
{
    if (m_is_open == false) {
        std::cout << "The Box is closed, cant wrap" << std::endl;
        return;
    }
    if (m_obj) {
        std::cout << "There is already an object inside the Box. Cant put another object inside" << std::endl;
        return;
    }
    m_obj = obj;
}

Object * Wrap::unWrapMeThat(void)
{
    return m_obj;
}

void Wrap::openMe(void)
{
    m_is_open = true;
}

void Wrap::closeMe(void)
{
    m_is_open = false;
}

bool Wrap::is_open(void)
{
    return m_is_open;
}