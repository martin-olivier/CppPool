/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MonitorOs_H
#define MonitorOs_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>
#include <sstream>

#include "Utils.hpp"

class MonitorOs
{
private:
    std::string m_username;
    std::string m_hostname;
    std::string m_os;
    std::string m_kernel;
    std::string m_date;
    std::string m_time;
public:
    MonitorOs();
    ~MonitorOs();
    void refresh();
    std::string get_username() const {return m_username;}
    std::string get_hostname() const {return m_hostname;}
    std::string get_os() const {return m_os;}
    std::string get_kernel() const {return m_kernel;}
    std::string get_date() const {return m_date;}
    std::string get_time() const {return m_time;}
};

#endif