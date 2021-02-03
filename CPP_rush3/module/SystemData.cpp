/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "SystemData.hpp"

SystemData::SystemData()
{
}

SystemData::~SystemData()
{
}

void SystemData::refresh()
{
    m_core.refresh();
    m_ram.refresh();
    m_net.refresh();
    m_os.refresh();
    m_proc.refresh();
}