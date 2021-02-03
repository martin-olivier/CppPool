/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Skat_H
#define Skat_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Skat
{
public:
    Skat(const std::string &name = "bob", int stimPaks = 15);
    ~Skat();

    int &stimPaks(void);
    const std::string &name();
    void shareStimPaks(int number, int &stock);
    void addStimPaks(unsigned int number);
    void useStimPaks();
    void status();
private:
    std::string _name;
    int _stimPaks;
};

#endif