/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MonitorRam_H
#define MonitorRam_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>
#include <sstream>

#include "Utils.hpp"

class MonitorRam
{
private:
    size_t m_total;
    size_t m_used;
    size_t m_free;
    size_t m_shared;
    size_t m_cache;
    size_t m_available;
public:
    MonitorRam();
    ~MonitorRam();
    float get_percentage() const;
    void refresh();
    // GETTERS
    size_t get_total() const {return m_total;}
    size_t get_used() const {return m_used;}
    size_t get_free() const {return m_free;}
    size_t get_shared() const {return m_shared;}
    size_t get_cache() const {return m_cache;}
    size_t get_available() const {return m_available;}
};

#endif