/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Box.hpp"

Box::Box(const std::string &name) : Wrap(name)
{

}

Box::~Box()
{

}

void Box::wrapMeThat(Object *obj)
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