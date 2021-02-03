/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef SystemData_H
#define SystemData_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>
#include <sstream>

#include "MonitorCore.hpp"
#include "MonitorRam.hpp"
#include "MonitorNet.hpp"
#include "MonitorOs.hpp"
#include "MonitorProcessList.hpp"

class SystemData
{
private:
    MonitorCore m_core;
    MonitorRam m_ram;
    MonitorNet m_net;
    MonitorOs m_os;
    MonitorProcessList m_proc;
public:
    SystemData();
    ~SystemData();
    void refresh();
    // GETTERS
    MonitorCore get_core() const {return m_core;}
    MonitorRam get_ram() const {return m_ram;}
    MonitorNet get_net() const {return m_net;}
    MonitorOs get_os() const {return m_os;}
    MonitorProcessList get_proc() const {return m_proc;}
};

#endif