/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial) : m_x(x), m_y(y), m_serial(serial)
{
    m_next = nullptr;
    m_prev = nullptr;
    std::cout << "KreogCom " << m_serial << " initialized" << std::endl;
}

KreogCom::~KreogCom()
{
    if (m_next != nullptr) {
        m_next->m_prev = nullptr;
    }
    if (m_prev != nullptr) {
        m_prev->m_next = nullptr;
    }
    std::cout << "KreogCom " << m_serial << " shutting down" << std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *new_node = new KreogCom(x, y, serial);
    new_node->m_prev = this;
    new_node->m_prev->m_next = new_node;
    new_node->m_next = this->m_next->m_next;
    this->m_next = new_node;
}

void KreogCom::removeCom()
{
    if (m_next == nullptr)
        return;
    delete m_next;
}

KreogCom *KreogCom::getCom(void) const
{
    return m_next;
}

void KreogCom::ping(void) const
{
    std::cout << "KreogCom " << m_serial << " currently at " << m_x << " " << m_y << std::endl;
}

void KreogCom::locateSquad(void) const
{
    KreogCom *tmp = m_next;

    while (tmp != nullptr) {
        tmp->ping();
        tmp = tmp->m_next;
    }
    this->ping();
}