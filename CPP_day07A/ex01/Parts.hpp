/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Parts_H
#define Parts_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Arms
{
private:
    std::string m_serial;
    bool m_functionnal;
public:
    Arms(std::string serial = "A-01", bool functionnal = true);
    ~Arms();
    bool isFunctional(void) const;
    std::string serial(void) const;
    void informations(void) const;
};

class Legs
{
private:
    std::string m_serial;
    bool m_functionnal;
public:
    Legs(std::string serial = "L-01", bool functionnal = true);
    ~Legs();
    bool isFunctional(void) const;
    std::string serial(void) const;
    void informations(void) const;
};

class Head
{
private:
    std::string m_serial;
    bool m_functionnal;
public:
    Head(std::string serial = "H-01", bool functionnal = true);
    ~Head();
    bool isFunctional(void) const;
    std::string serial(void) const;
    void informations(void) const;
};

#endif