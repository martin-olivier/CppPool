/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Parts.hpp"

// ARMS

Arms::Arms(std::string serial, bool fonctionnal)
{
    m_functionnal = fonctionnal;
    m_serial = serial;
}

Arms::~Arms()
{

}

bool Arms::isFunctional(void) const
{
    return m_functionnal;
}

std::string Arms::serial(void) const
{
    return m_serial;
}

void Arms::informations(void) const
{
    std::cout << "\t" << "[Parts] Arms " << m_serial << " status : ";
    if (m_functionnal == true)
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl;
}

// LEGS

Legs::Legs(std::string serial, bool fonctionnal)
{
    m_functionnal = fonctionnal;
    m_serial = serial;
}

Legs::~Legs()
{

}

bool Legs::isFunctional(void) const
{
    return m_functionnal;
}

std::string Legs::serial(void) const
{
    return m_serial;
}

void Legs::informations(void) const
{
    std::cout << "\t" << "[Parts] Legs " << m_serial << " status : ";
    if (m_functionnal == true)
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl;
}

// HEAD

Head::Head(std::string serial, bool fonctionnal)
{
    m_functionnal = fonctionnal;
    m_serial = serial;
}

Head::~Head()
{

}

bool Head::isFunctional(void) const
{
    return m_functionnal;
}

std::string Head::serial(void) const
{
    return m_serial;
}

void Head::informations(void) const
{
    std::cout << "\t" << "[Parts] Head " << m_serial << " status : ";
    if (m_functionnal == true)
        std::cout << "OK" << std::endl;
    else
        std::cout << "KO" << std::endl;
}