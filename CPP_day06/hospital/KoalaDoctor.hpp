/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef KoalaDoctor_H
#define KoalaDoctor_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include "KoalaNurse.hpp"
#include "SickKoala.hpp"

class KoalaDoctor
{
private:
    std::string m_name;
    bool m_is_working;
public:
    KoalaDoctor(std::string name);
    ~KoalaDoctor();
    void diagnose(SickKoala *patient);
    void timeCheck(void);
    std::string getName(void);
};

#endif