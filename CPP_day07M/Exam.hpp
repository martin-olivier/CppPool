/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Federation_H
#define Federation_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Exam
{
private:
public:
    Exam(bool *in);
    ~Exam();
    void (Exam::*kobayashiMaru)(int);
    void start(int nb);
    bool isCheating();
    static bool cheat;
};

#endif