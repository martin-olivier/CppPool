/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Picture_H
#define Picture_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Picture
{
private:
public:
    Picture();
    Picture(const Picture &copy);
    Picture(const std::string &file);
    ~Picture();
    std::string data;
    bool getPictureFromFile(const std::string &file);
    Picture &operator=(const Picture &copy);
};

#endif