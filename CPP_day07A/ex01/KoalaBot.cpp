/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    m_serial = serial;
}

KoalaBot::~KoalaBot()
{

}

void KoalaBot::setParts(const Arms &arms)
{
    m_arms = arms;
}

void KoalaBot::setParts(const Legs &legs)
{
    m_legs = legs;
}

void KoalaBot::setParts(const Head &head)
{
    m_head = head;
}

void KoalaBot::swapParts(Arms &arms)
{
    Arms tmp = arms;
    arms = m_arms;
    m_arms = tmp;
}

void KoalaBot::swapParts(Legs &legs)
{
    Legs tmp = legs;
    legs = m_legs;
    m_legs = tmp;
}

void KoalaBot::swapParts(Head &head)
{
    Head tmp = head;
    head = m_head;
    m_head = tmp;
}

void KoalaBot::informations(void) const
{
    std::cout << "[KoalaBot] " << m_serial << std::endl;
    m_arms.informations();
    m_legs.informations();
    m_head.informations();
}

bool KoalaBot::status(void) const
{
    if (m_arms.isFunctional() == true && m_legs.isFunctional() == true && m_head.isFunctional() == true)
        return true;
    else
        return false;
}