/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ex01_H
#define ex01_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

template<typename T>
int compare(const T &a, const T &b)
{
    if (a == b)
        return 0;
    if (a < b)
        return -1;
    return 1;
}

template<>
int compare<const char*>(const char* const &a, const char* const &b)
{
    if (a == b)
        return 0;
    if (a < b)
        return -1;
    return 1;

}

#endif