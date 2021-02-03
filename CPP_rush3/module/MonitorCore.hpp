/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MonitorCore_H
#define MonitorCore_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>

#include "Utils.hpp"

class MonitorCore
{
private:
    size_t m_procs_running;
    int m_nb_core;
    size_t m_user;
    size_t m_nice;
    size_t m_system;
    size_t m_idle;
    size_t m_iowait;
    size_t m_irq;
    size_t m_softirq;
    std::string m_model;
    float m_GHz;
public:
    MonitorCore();
    ~MonitorCore();
    float get_percentage() const;
    void refresh();
    // GETTERS
    size_t get_procs_running() const {return m_procs_running;}
    int get_nb_core() const {return m_nb_core;}
    size_t get_user() const {return m_user;}
    size_t get_nice() const {return m_nice;}
    size_t get_system() const {return m_system;}
    size_t get_idle() const {return m_idle;}
    size_t get_iowait() const {return m_iowait;}
    size_t get_irq() const {return m_irq;}
    size_t get_softirq() const {return m_softirq;}
    std::string get_model() const {return m_model;}
    float get_GHz() const {return m_GHz;}
};

#endif