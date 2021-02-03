/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Cesar.hpp"

Cesar::Cesar() : m_index(3)
{
}

Cesar::~Cesar()
{
}

bool Cesar::isAlpha(char cara)
{
    if (cara > 64 && cara < 91)
        return true;
    if (cara > 96 && cara < 123)
        return true;
    return false;
}

bool Cesar::isMaj(char cara)
{
    if (cara > 64 && cara < 91)
        return true;
    return false;
}

bool Cesar::isMin(char cara)
{
    if (cara > 96 && cara < 123)
        return true;
    return false;
}

void Cesar::encryptChar(char plainchar)
{
    int i = 0;

    if (m_index == 26)
        m_index = 0;

    if (isAlpha(plainchar) == false) {
        m_index++;
        std::cout << static_cast<char>(plainchar);
        return;
    }
    if (isAlpha(plainchar + m_index) == false && !(isMaj(plainchar) == true && isMin(plainchar + m_index) == true)) {
        while (isAlpha(plainchar + m_index) == false) {
            plainchar--;
            i++;
        }
        if (plainchar > 64 && plainchar < 91)
            std::cout << static_cast<char>(64 + i);
        else
            std::cout << static_cast<char>(96 + i);
        m_index++;
        return;
    }
    std::cout << static_cast<char>(plainchar + m_index);
    m_index++;
}

void Cesar::decryptChar(char cipherchar)
{
    int i = 0;

    if (m_index == 26)
        m_index = 0;

    if (isAlpha(cipherchar) == false) {
        m_index++;
        std::cout << static_cast<char>(cipherchar);
        return;
    }
    if (isAlpha(cipherchar - m_index) == false) {
        if (isMin(cipherchar) == true && isMaj(cipherchar - m_index) == true) {
            while (isMin(cipherchar - m_index) == false) {
                cipherchar++;
                i++;
            }
            if (cipherchar > 64 && cipherchar < 91)
                std::cout << static_cast<char>(64 + 26 - i);
            else
                std::cout << static_cast<char>(96 + 26 - i);
            m_index++;
            return;
        }
        while (isAlpha(cipherchar - m_index) == false) {
            cipherchar++;
            i++;
        }
        if (cipherchar > 64 && cipherchar < 91)
            std::cout << static_cast<char>(64 + 26 - i);
        else
            std::cout << static_cast<char>(96 + 26 - i);
        m_index++;
        return;
    }
    std::cout << static_cast<char>(cipherchar - m_index);
    m_index++;
}

void Cesar::reset()
{
    m_index = 3;
}