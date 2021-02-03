/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MonitorCore.hpp"

MonitorCore::MonitorCore()
{
}

MonitorCore::~MonitorCore()
{
}

void MonitorCore::refresh()
{
    std::string tmp = Utils::get_file_content("/proc/stat");
    std::vector<std::string> general_vec = Utils::string_to_vector(tmp, '\n');
    std::vector<std::string> info_vec = Utils::string_to_vector(general_vec[0], ' ');

    m_user = atol(info_vec[1].c_str());
    m_nice = atol(info_vec[2].c_str());
    m_system = atol(info_vec[3].c_str());
    m_idle = atol(info_vec[4].c_str());
    m_iowait = atol(info_vec[5].c_str());
    m_irq = atol(info_vec[6].c_str());
    m_softirq = atol(info_vec[7].c_str());

    for (int i = 0; i < general_vec.size(); i++) {
        if (general_vec[i].find("procs_running") != std::string::npos) {
            std::vector<std::string> process_vec = Utils::string_to_vector(general_vec[i], ' ');
            m_procs_running = atol(process_vec[1].c_str());
        }
    }
    m_nb_core = 0;
    for (int i = 1; i < general_vec.size(); i++) {
        if (general_vec[i].find("cpu") != std::string::npos) {
            m_nb_core++;
        }
    }
    tmp = Utils::get_file_content("/proc/cpuinfo");
    std::vector<std::string> cpuinfo_vec = Utils::string_to_vector(tmp, '\n');
    for (int i = 0; i < cpuinfo_vec.size(); i++) {
        if (cpuinfo_vec[i].find("model name") != std::string::npos) {
            std::vector<std::string> cpuname_vec = Utils::string_to_vector(cpuinfo_vec[i], ' ');
            m_model = "";
            for (int i = 2; i < cpuname_vec.size(); i++) {
                m_model += cpuname_vec[i];
                m_model += " ";
            }
            break;
        }
    }
    for (int i = 0; i < cpuinfo_vec.size(); i++) {
        if (cpuinfo_vec[i].find("cpu MHz") != std::string::npos) {
            std::vector<std::string> cpuname_vec = Utils::string_to_vector(cpuinfo_vec[i], ' ');
            m_GHz = atof(cpuname_vec[2].c_str());
            break;
        }
    }
}

float MonitorCore::get_percentage() const
{
    return (100 - (((m_idle) * 100 ) / (m_user + m_nice + m_system + m_idle + m_iowait + m_irq + m_softirq)));
}