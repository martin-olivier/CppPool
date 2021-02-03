/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Utils_H
#define Utils_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cstring>

class Utils
{
public:
    static std::string get_cmd_output(const std::string &command);
    static std::string get_file_content(const std::string &in);
    static std::vector<std::string> string_to_vector(std::string str, char separator);
    static void my_exit(int exit_satus, const std::string &error_msg);
};

#endif