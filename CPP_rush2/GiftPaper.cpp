/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "GiftPaper.hpp"

GiftPaper::GiftPaper(const std::string &name) : Wrap(name)
{

}

GiftPaper::~GiftPaper()
{

}

void GiftPaper::wrapMeThat(Object *obj)
{
    if (m_obj) {
        std::cout << "There is already an object inside the GiftPaper. Cant put another object inside" << std::endl;
        return;
    }
    m_obj = obj;
}