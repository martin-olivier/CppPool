/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MyGKrellm.hpp"

void MyGKrellm::display_usage() const
{
    std::cout << "Usage : ./MyGKrellm [arg]" << std::endl;
    std::cout << "[arg] :\n1 -> Terminal\n2 -> Graphical" << std::endl;
    exit(0);
}

MyGKrellm::MyGKrellm(int ac, char **av)
{
    if (ac != 2)
        display_usage();
    if (strcmp(av[1], "Graphical") == 0)
        m_display = true;
    else if (strcmp(av[1], "Terminal") == 0)
        m_display = false;
    else
        display_usage();
}

MyGKrellm::~MyGKrellm()
{
}

void MyGKrellm::dump() const
{
    std::cout << "---CPU INFOS---" << std::endl;
    std::cout << "Nb de processus : " << m_data.get_core().get_procs_running() << std::endl;
    std::cout << "Nb de coeurs : " << m_data.get_core().get_nb_core() << std::endl;
    std::cout << "Modèle : " << m_data.get_core().get_model() << std::endl;
    std::cout << "MHz : " << m_data.get_core().get_GHz() << std::endl;
    std::cout << "% d'utilisation : " << m_data.get_core().get_percentage() << std::endl << std::endl;

    std::cout << "User : " << m_data.get_core().get_user() << std::endl;
    std::cout << "Nice : " << m_data.get_core().get_nice() << std::endl;
    std::cout << "System : " << m_data.get_core().get_system() << std::endl;
    std::cout << "Idle : " << m_data.get_core().get_idle() << std::endl;
    std::cout << "IOWait : " << m_data.get_core().get_iowait() << std::endl;
    std::cout << "irq : " << m_data.get_core().get_irq() << std::endl;
    std::cout << "softirq : " << m_data.get_core().get_softirq() << std::endl;

    std::cout << "\n---RAM INFOS---\n" << std::endl;
    std::cout << "% d'utilisation : " << m_data.get_ram().get_percentage() << std::endl;
    std::cout << "Total : " << m_data.get_ram().get_total() << std::endl;
    std::cout << "Utilisé : " << m_data.get_ram().get_used() << std::endl;
    std::cout << "Libre : " << m_data.get_ram().get_free() << std::endl;
    std::cout << "Partagé : " << m_data.get_ram().get_shared() << std::endl;
    std::cout << "Cache : " << m_data.get_ram().get_cache() << std::endl;
    std::cout << "Disponible : " << m_data.get_ram().get_available() << std::endl << std::endl;

    std::cout << "---OS INFOS---\n" << std::endl;
    std::cout << "Username : " << m_data.get_os().get_username() << std::endl;
    std::cout << "Hostname : " << m_data.get_os().get_hostname() << std::endl;
    std::cout << "OS : " << m_data.get_os().get_os() << std::endl;
    std::cout << "Kernel : " << m_data.get_os().get_kernel() << std::endl;
    std::cout << "Date : " << m_data.get_os().get_date() << std::endl;
    std::cout << "Heure : " << m_data.get_os().get_time() << std::endl;
}

int MyGKrellm::start()
{
    m_data.refresh();
    if (m_display == false)
        MyGKrellm_terminal(m_data);
    else if (m_display == true)
        MyGKrellm_graphical(m_data);
    return EXIT_SUCCESS;
}