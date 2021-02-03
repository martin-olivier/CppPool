/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "PapaXmasElf.hpp"

PapaXmasElf::PapaXmasElf(PapaXmasTable *table, PapaXmasConveyorBelt *tapis)
{
    m_table = table;
    m_tapis = tapis;
    m_wrap_in_hand = nullptr;
}

PapaXmasElf::~PapaXmasElf()
{

}

void PapaXmasElf::wrap(Wrap *emballage, size_t index)
{
    if (m_table->get_content().size() <= index) {
        std::cout << "Cant Wrap an unexisting object" << std::endl;
        return;
    }
    if (emballage) {
        emballage->wrapMeThat(m_table->get_content()[index]);
        std::cout << "tuuuut tuuut tuut" << std::endl;
    }
    else
        std::cout << "Cant Wrap without Wrap" << std::endl;
}

void PapaXmasElf::open(Wrap *emballage)
{
    if (emballage)
        emballage->openMe();
    else
        std::cout << "I dont have a Wrap in my hand, i cant open it" << std::endl;
}

void PapaXmasElf::close(Wrap *emballage)
{
    if (emballage)
        emballage->closeMe();
    else
        std::cout << "I dont have a Wrap in my hand, i cant close it" << std::endl;
}

void PapaXmasElf::in(void)
{
    m_tapis->in_button();
}

void PapaXmasElf::out(void)
{
    m_tapis->out_button();
}

std::string* PapaXmasElf::look(void)
{
    std::string *tmp = new std::string[11];
    size_t i = 0;

    for (; i < m_table->get_content().size(); i++)
        tmp[i] = m_table->get_content()[i]->get_name();
    tmp[i] = nullptr;
    return tmp;
}

void PapaXmasElf::put()
{
    if (!m_wrap_in_hand) {
        std::cout << "Cant put the object on the ConveyorBelt, i have nothing on my hands" << std::endl;
        return;
    }
    if (m_tapis->set_object(m_wrap_in_hand) == false)
        return;
    m_wrap_in_hand = nullptr;
}

void PapaXmasElf::take()
{
    if (m_wrap_in_hand) {
        std::cout << "Cant take the object on the ConveyorBelt, i already have something on my hands" << std::endl;
        return;
    }
    m_wrap_in_hand = static_cast<Wrap*>(m_tapis->get_object());
    if (m_wrap_in_hand) {
        std::cout << "whistles while working" << std::endl;
    }
    m_tapis->set_empty();
}

Wrap *PapaXmasElf::get_in_hands(void)
{
    return m_wrap_in_hand;
}