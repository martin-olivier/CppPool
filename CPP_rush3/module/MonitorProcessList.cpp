/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MonitorProcessList.hpp"

MonitorProcessList::MonitorProcessList()
{
}

MonitorProcessList::~MonitorProcessList()
{
}

void MonitorProcessList::refresh()
{
    m_process_list.clear();
    std::string tmp = Utils::get_cmd_output("ps au");
    std::vector<std::string> general_vec = Utils::string_to_vector(tmp, '\n');
    for (int i = 1; i < general_vec.size(); i++)
        m_process_list.push_back(general_vec[i]);
}