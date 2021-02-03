/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef DroidMemory_H
#define DroidMemory_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class DroidMemory
{
private:
    size_t m_fingerprint;
    size_t m_exp;
public:
    DroidMemory();
    ~DroidMemory();
    // GETTERS
    size_t getFingerprint(void) const;
    size_t getExp(void) const;
    void setFingerprint(size_t fingerprint);
    void setExp(size_t exp);
    // OPERATORS
    DroidMemory& operator<<(const DroidMemory &a);
    DroidMemory& operator>>(const DroidMemory &a);
    void operator+=(const DroidMemory &druid);
    void operator+=(const size_t exp);
    DroidMemory& operator+(const DroidMemory &druid) const;
    DroidMemory& operator+(const size_t &exp) const;
};

std::ostream& operator<<(std::ostream &flux, const DroidMemory &a);

#endif