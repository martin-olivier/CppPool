/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ex00_H
#define ex00_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
template<typename T>
T min(const T &a, const T &b)
{
    if (a == b)
        return b;

    if (a < b)
        return a;
    return b;
}

template<typename T>
T max(const T &a, const T &b)
{
    if (a == b)
        return b;

    if (a > b)
        return a;
    return b;
}

template<typename T>
T add(const T &a, const T &b)
{
    return a + b;
}

#endif