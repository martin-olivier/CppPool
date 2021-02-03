/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MonitorRam.hpp"

MonitorRam::MonitorRam()
{
}

MonitorRam::~MonitorRam()
{
}

void MonitorRam::refresh()
{
    std::string tmp = Utils::get_cmd_output("free");
    std::vector<std::string> general_vec = Utils::string_to_vector(tmp, '\n');
    std::vector<std::string> info_vec = Utils::string_to_vector(general_vec[1], ' ');
    m_total = atol(info_vec[1].c_str());
    m_used = atol(info_vec[2].c_str());
    m_free = atol(info_vec[3].c_str());
    m_shared = atol(info_vec[4].c_str());
    m_cache = atol(info_vec[5].c_str());
    m_available = atol(info_vec[6].c_str());
}

float MonitorRam::get_percentage() const
{
    return ((100 * m_used) / m_total);
}