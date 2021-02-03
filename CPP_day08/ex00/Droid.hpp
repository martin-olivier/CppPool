/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Droid_H
#define Droid_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class Droid
{
private:
    std::string m_ID;
    size_t m_energy;
    const size_t m_attack;
    const size_t m_toughness;
    std::string *m_status;
public:
    Droid(std::string serial_number = "");
    Droid(const Droid &base);
    ~Droid();
    // GETTERS
    std::string getId(void) const;
    size_t getEnergy(void) const;
    size_t getAttack(void) const;
    size_t getToughness(void) const;
    std::string *getStatus(void) const;
    // SETTERS
    void setId(std::string ID);
    void setEnergy(size_t energy);
    void setStatus(std::string *status);
    Droid& operator=(const Droid &a);
    Droid& operator<<(size_t &add);
    bool operator==(const Droid &a) const;
    bool operator!=(const Droid &a) const;
};

std::ostream& operator<<(std::ostream &flux, const Droid &a);

#endif