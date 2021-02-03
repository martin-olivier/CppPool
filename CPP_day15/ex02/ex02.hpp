/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ex02_H
#define ex02_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

template<typename T>
T min(const T &a, const T &b)
{
    std::cout << "template min" << std::endl;

    if (a < b)
        return a;
    if (a > b)
        return b;
    return a;
}

int min(const int &a, const int &b)
{
    std::cout << "non-template min" << std::endl;

    if (a < b)
        return a;
    if (a > b)
        return b;
    return a;
}

template<typename T>
T templateMin(const T *a, size_t size)
{
    T minval = a[0];
    for (size_t i = 1; i < size; i++)
        minval = min<T>(minval, a[i]);
    return minval;
}

int nonTemplateMin(const int *a, size_t size)
{
    int minval = a[0];
    for (size_t i = 1; i < size; i++)
        minval = min(minval, a[i]);
    return minval;
}

#endif