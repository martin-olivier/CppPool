/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MonitorNetInterface_H
#define MonitorNetInterface_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <cstring>
#include <exception>

#include "Utils.hpp"

class MonitorNetInterface
{
private:
    size_t m_tx_bytes;
    size_t m_rx_bytes;
    size_t m_tx_packets;
    size_t m_rx_packets;
    const std::string m_name;
public:
    MonitorNetInterface(const std::string &name);
    ~MonitorNetInterface();
    void refresh();
    std::string get_name() const {return m_name;}
    size_t get_tx_bytes() const {return m_tx_bytes;}
    size_t get_rx_bytes() const {return m_rx_bytes;}
    size_t get_tx_packets() const {return m_tx_packets;}
    size_t get_rx_packets() const {return m_rx_packets;}
};

#endif