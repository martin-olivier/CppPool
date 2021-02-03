/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ex03_H
#define ex03_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

template<typename T>
void print(const T& a)
{
    std::cout << a << std::endl;
}

template<typename T>
void foreach(const T *a, void (*fn)(const T&), size_t size)
{
    for (int i = 0; i < size; i++)
        fn(a[i]);
}

#endif