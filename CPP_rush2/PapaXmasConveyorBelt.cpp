/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "PapaXmasConveyorBelt.hpp"

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
    m_obj = nullptr;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{

}

Object *PapaXmasConveyorBelt::get_object(void)
{
    if (!m_obj) {
        std::cout << "There is no object on the ConveyorBelt" << std::endl;
        return nullptr;
    }

    return m_obj;
}

bool PapaXmasConveyorBelt::set_object(Object *obj)
{
    if (m_obj) {
        std::cout << "There is already an object on the ConveyorBelt" << std::endl;
        return false;
    }
    m_obj = obj;
    return true;
}

void PapaXmasConveyorBelt::in_button(void)
{
    if (m_obj) {
        std::cout << "There is already an object on the ConveyorBelt" << std::endl;
        return;
    }
    m_obj = new Wrap("Wrap");
}

void PapaXmasConveyorBelt::out_button(void)
{
    if (!m_obj) {
        std::cout << "There is no object to send to Santa on the ConveyorBelt" << std::endl;
        return;
    }
    std::cout << "Sending an object to Santa" << std::endl;
    m_obj = nullptr;
}

void PapaXmasConveyorBelt::set_empty(void)
{
    m_obj = nullptr;
}