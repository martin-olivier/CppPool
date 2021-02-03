/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Object_H
#define Object_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Object
{
protected:
    const std::string m_name;
public:
    Object(const std::string &name);
    ~Object();
    const std::string &get_name(void) const;
};

std::ostream& operator<<(std::ostream &flux, const Object &obj);

#endif