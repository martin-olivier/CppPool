/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef SickKoala_H
#define SickKoala_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>

class SickKoala
{
private:
    std::string m_name;
public:
    SickKoala(std::string name);
    ~SickKoala();
    void poke(void);
    bool takeDrug(std::string str);
    void overDrive(std::string str);
    std::string getName(void);
};

#endif