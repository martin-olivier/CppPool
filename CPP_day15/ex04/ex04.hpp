/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ex04_H
#define ex04_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

template<typename T>
bool equal(const T &a, const T &b);

template<typename T>
class Tester
{
private:
public:
    Tester() {};
    bool equal(const T &a, const T &b);
};

#endif