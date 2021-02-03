/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef WarpSystem_H
#define WarpSystem_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

namespace WarpSystem
{
    class QuantumReactor
    {
    private:
        bool _stability;
    public:
        QuantumReactor();
        ~QuantumReactor();
        bool isStable();
        void setStability(bool stability);
    };

    class Core
    {
    private:
        QuantumReactor *_coreReactor;
    public:
        Core(QuantumReactor *coreReactor);
        ~Core();
        QuantumReactor *checkReactor(void);
    };
}

#endif