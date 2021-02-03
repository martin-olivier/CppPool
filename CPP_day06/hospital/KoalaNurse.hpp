/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef KoalaNurse_H
#define KoalaNurse_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include "SickKoala.hpp"

class KoalaNurse
{
private:
    int m_ID;
    bool m_is_working;
public:
    KoalaNurse(int ID);
    ~KoalaNurse();
    void giveDrug(std::string drug, SickKoala *patient);
    std::string readReport(std::string filename);
    void timeCheck(void);
    int getID(void);
};

#endif