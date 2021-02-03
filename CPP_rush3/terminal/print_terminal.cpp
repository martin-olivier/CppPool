/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MyGKrellm_terminal.hpp"

void terminal_print_os(SystemData data)
{
    mvprintw(0, 0, " <--- ==================== OS INFO ===================== --->");
    mvprintw(2, 0, "Username : \t%s", data.get_os().get_username().c_str());
    mvprintw(3, 0, "Hostname : \t%s", data.get_os().get_hostname().c_str());
    mvprintw(4, 0, "OS : \t\t%s", data.get_os().get_os().c_str());
    mvprintw(5, 0, "Kernel : \t%s", data.get_os().get_kernel().c_str());
    mvprintw(6, 0, "Date : \t\t%s", data.get_os().get_date().c_str());
    mvprintw(7, 0, "Time : \t\t%s", data.get_os().get_time().c_str());
}

void terminal_print_cpu(SystemData data)
{
    mvprintw(0, 0, " <--- ==================== CPU INFO ==================== --->");
    mvprintw(2, 0, "Model : \t\t%s", data.get_core().get_model().c_str());
    mvprintw(3, 0, "MHz : \t\t\t%.0f", data.get_core().get_GHz());
    mvprintw(4, 0, "Total Core : \t\t%d", data.get_core().get_nb_core());
    mvprintw(5, 0, "Process running : \t%ld", data.get_core().get_procs_running());
    mvprintw(6, 0, "Usage : \t\t%.0f%%", data.get_core().get_percentage());
    float purc = data.get_core().get_percentage();
    int j = 31;
    mvprintw(6, 30, "[          ]", 50);
    for (int i = 0; i < purc / 10; i++, j++)
        mvprintw(6, j, "=");
    mvprintw(8, 0, "Details :");
    mvprintw(10, 0, "User : \t\t%ld", data.get_core().get_user());
    mvprintw(11, 0, "Nice : \t\t%ld", data.get_core().get_nice());
    mvprintw(12, 0, "System : \t%ld", data.get_core().get_system());
    mvprintw(13, 0, "Idle : \t\t%ld", data.get_core().get_idle());
    mvprintw(14, 0, "IOwait : \t%ld", data.get_core().get_iowait());
    mvprintw(15, 0, "IRQ : \t\t%ld", data.get_core().get_irq());
    mvprintw(16, 0, "SoftIRQ : \t%ld", data.get_core().get_softirq());
}

void terminal_print_ram(SystemData data)
{
    mvprintw(0, 0, " <--- ==================== RAM INFO ==================== --->");
    mvprintw(2, 0, "Total : \t%ld", data.get_ram().get_total());
    mvprintw(3, 0, "Used : \t\t%ld", data.get_ram().get_used());
    mvprintw(4, 0, "Free : \t\t%ld", data.get_ram().get_free());
    mvprintw(5, 0, "Shared : \t%ld", data.get_ram().get_shared());
    mvprintw(6, 0, "Cache : \t%ld", data.get_ram().get_cache());
    mvprintw(7, 0, "Available : \t%ld", data.get_ram().get_available());
    mvprintw(9, 0, "Status : \t%.0f%%", data.get_ram().get_percentage());
    float purc = data.get_ram().get_percentage();
    int j = 26;
    mvprintw(9, 25, "[          ]", 50);
    for (int i = 0; i < purc / 10; i++, j++)
        mvprintw(9, j, "=");
}

void terminal_print_net(SystemData data)
{
    mvprintw(0, 0, " <--- ==================== NET INFO ==================== --->");
    mvprintw(2, 0, "Network Card : %ld", data.get_net().get_net_list().size());
    int j = 3;

    for (int i = 0; i < data.get_net().get_net_list().size(); i++) {
        j++;
        mvprintw(j, 0, "%s :", data.get_net().get_net_list()[i].get_name().c_str());
        j++;
        mvprintw(j, 0, "\tTx bytes   : \t%ld", data.get_net().get_net_list()[i].get_tx_bytes());
        j++;
        mvprintw(j, 0, "\tRx bytes   : \t%ld", data.get_net().get_net_list()[i].get_rx_bytes());
        j++;
        mvprintw(j, 0, "\tTx packets : \t%ld", data.get_net().get_net_list()[i].get_tx_packets());
        j++;
        mvprintw(j, 0, "\tRx packets : \t%ld", data.get_net().get_net_list()[i].get_rx_packets());
        j++;
    }
}

void terminal_print_proc(SystemData data)
{
    mvprintw(0, 0, " <--- ================== PROCESS INFO ================== --->");
    mvprintw(2, 0, "USER       PID %%CPU %%MEM    VSZ   RSS TTY      STAT START   TIME COMMAND");

    for (int i = 0; i < data.get_proc().get_process_list().size(); i++) {
        mvprintw(i + 4, 0, "%s", data.get_proc().get_process_list()[i].c_str());
    }
}