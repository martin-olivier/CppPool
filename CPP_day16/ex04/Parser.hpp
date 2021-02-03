/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Parser_H
#define Parser_H

#include <iostream>
#include <stack>

class Parser
{
private:
public:
    Parser();
    ~Parser();
    void feed(const std::string &);
    int result() const;
    void reset();
};

#endif