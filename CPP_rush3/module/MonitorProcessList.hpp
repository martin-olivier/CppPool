/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MonitorProcessList_H
#define MonitorProcessList_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>
#include <sstream>

#include "Utils.hpp"

class MonitorProcessList
{
private:
    std::vector<std::string> m_process_list;
public:
    MonitorProcessList();
    ~MonitorProcessList();
    void refresh();
    std::vector<std::string> get_process_list() const {return m_process_list;}
};

#endif