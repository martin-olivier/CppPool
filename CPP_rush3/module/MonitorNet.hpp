/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MonitorNet_H
#define MonitorNet_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>

#include "Utils.hpp"
#include "MonitorNetInterface.hpp"

class MonitorNet
{
private:
    std::vector<MonitorNetInterface> m_interface_list;
public:
    MonitorNet();
    ~MonitorNet();
    void refresh();
    std::vector<MonitorNetInterface> get_net_list() const {return m_interface_list;}
};

#endif