/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "PapaXmasTable.hpp"

PapaXmasTable::PapaXmasTable()
{
    m_collapse = false;
    m_content.push_back(new Teddy("Teddyyy"));
    m_content.push_back(new LittlePony("Ponyyyy"));
}

PapaXmasTable::~PapaXmasTable()
{

}

void PapaXmasTable::get_object(IConveyorBelt *tapis)
{
    if (m_collapse == true) {
        std::cout << "The table has collapsed. can't do any action" << std::endl;
        return;
    }
    if (tapis->get_object() == nullptr)
        return;
    m_content.push_back(tapis->get_object());
    tapis->set_empty();
    if (m_content.size() > 10) {
        std::cout << "The table has collapsed. can't do any action" << std::endl;
        m_collapse = true;
    }
}

void PapaXmasTable::put_object(IConveyorBelt *tapis, size_t pos)
{
    if (m_collapse == true) {
        std::cout << "The table has collapsed. can't do any action" << std::endl;
        return;
    }
    if (pos >= m_content.size()) {
        std::cout << "Cant put an non-existing object on the ConveyorBelt" << std::endl;
        return;
    }
    tapis->set_object(m_content[pos]);
    m_content.erase(m_content.begin() + pos);
}

std::vector<Object*> PapaXmasTable::get_content(void)
{
    return m_content;
}