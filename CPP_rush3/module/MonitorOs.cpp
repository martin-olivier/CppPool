/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MonitorOs.hpp"

MonitorOs::MonitorOs()
{
}

MonitorOs::~MonitorOs()
{
}

void MonitorOs::refresh()
{
    m_username = Utils::get_cmd_output("whoami");
    m_hostname = Utils::get_file_content("/proc/sys/kernel/hostname");
    m_kernel = Utils::get_cmd_output("uname -r");
    std::string tmp = Utils::get_file_content("/etc/os-release");
    std::vector<std::string> vec = Utils::string_to_vector(tmp, '\n');
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i].find("NAME") != std::string::npos) {
            std::vector<std::string> name_vec = Utils::string_to_vector(vec[i], '=');
            m_os = name_vec[1];
            break;
        }
    }
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    std::ostringstream oss;
    oss << std::put_time(&tm, "%d/%m/%Y %H:%M:%S");
    auto str = oss.str();
    std::vector<std::string> time_vec = Utils::string_to_vector(str, ' ');
    m_date = time_vec[0];
    m_time = time_vec[1];
}