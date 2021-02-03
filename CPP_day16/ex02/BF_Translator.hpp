/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef BF_translator_H
#define BF_translator_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <map>

class BF_Translator
{
private:
public:
    int translate(const std::string &in, const std::string &out);
};

#endif