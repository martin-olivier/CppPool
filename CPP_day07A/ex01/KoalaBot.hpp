/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef KoalaBot_H
#define KoalaBot_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Parts.hpp"

class KoalaBot
{
private:
    std::string m_serial;
    Arms m_arms;
    Legs m_legs;
    Head m_head;
public:
    KoalaBot(std::string serial = "Bob-01");
    ~KoalaBot();
    void setParts(const Arms &arms);
    void setParts(const Legs &legs);
    void setParts(const Head &head);
    void swapParts(Arms &arms);
    void swapParts(Legs &legs);
    void swapParts(Head &head);
    void informations(void) const;
    bool status(void) const;
};

#endif