/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Exam.hpp"

bool Exam::cheat = false;

Exam::Exam(bool *in)
{
    cheat = *in;
}

Exam::~Exam()
{
}

void Exam::start(int nb)
{
    std::cout << "[The exam is starting]" << std::endl;
    std::cout << nb << " Klingon vessels appeared out of nowhere." << std::endl;
    std::cout << "they are fully armed and shielded" << std::endl;
    if (cheat == false)
        std::cout << "This exam is hard... you lost again." << std::endl;
    else
        std::cout << "What the... someone changed the parameters of the exam !" << std::endl;
}

bool Exam::isCheating()
{
    return cheat;
}