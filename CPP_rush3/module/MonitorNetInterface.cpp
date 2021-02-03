/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MonitorNetInterface.hpp"

MonitorNetInterface::MonitorNetInterface(const std::string &name) : m_name(name)
{
}

MonitorNetInterface::~MonitorNetInterface()
{

}

void MonitorNetInterface::refresh()
{
    m_tx_bytes = atol(Utils::get_file_content("/sys/class/net/" + m_name + "/statistics/tx_bytes").c_str());
    m_rx_bytes = atol(Utils::get_file_content("/sys/class/net/" + m_name + "/statistics/rx_bytes").c_str());
    m_tx_packets = atol(Utils::get_file_content("/sys/class/net/" + m_name + "/statistics/tx_packets").c_str());
    m_rx_packets = atol(Utils::get_file_content("/sys/class/net/" + m_name + "/statistics/rx_packets").c_str());
}