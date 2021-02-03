/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MonitorNet.hpp"

MonitorNet::MonitorNet()
{
}

MonitorNet::~MonitorNet()
{
}

void MonitorNet::refresh()
{
    m_interface_list.clear();
    std::string tmp = Utils::get_cmd_output("netstat -i");
    std::vector<std::string> general_vec = Utils::string_to_vector(tmp, '\n');
    std::vector<std::string> info_vec = Utils::string_to_vector(general_vec[0], ' ');
    for (int i = 2; i < general_vec.size(); i++)
        m_interface_list.push_back(MonitorNetInterface(Utils::string_to_vector(general_vec[i], ' ')[0]));
    for (int i = 0; i < m_interface_list.size(); i++)
        m_interface_list[i].refresh();
}