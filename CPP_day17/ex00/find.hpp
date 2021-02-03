/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef find_H
#define find_H

#include <iostream>
#include <algorithm>

template<typename X>
typename X::iterator do_find(X &file, int i)
{
    return std::find(file.begin(), file.end(), i);
}

#endif