/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Utils.hpp"

void Utils::my_exit(int exit_satus, const std::string &error_msg)
{
    std::cerr << error_msg << std::endl;
    exit(exit_satus);
}

std::string Utils::get_cmd_output(const std::string &command)
{
    char buffer[2048];
    std::string result = "";

    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe)
        my_exit(EXIT_FAILURE, "Cannot execute command [" + command + "], exiting...");

    while (!feof(pipe)) {
        if (fgets(buffer, 2048, pipe) != NULL)
            result += buffer;
    }
    pclose(pipe);
    if (result[result.size() - 1] == '\n')
        result.pop_back();
    return result;
}

std::string Utils::get_file_content(const std::string &in)
{
    std::ifstream file;
    file.open(in, std::ifstream::in);

    if (file.is_open()) {
        std::string data;
        char c = file.get();

        while (file.good()) {
            data += c;
            c = file.get();
        }
        file.close();
        if (data[data.size() - 1] == '\n')
            data.pop_back();
        return data;
    }
    file.close();
    my_exit(EXIT_FAILURE, "Cannot access file [" + in + "], exiting...");
    return "";
}

std::vector<std::string> Utils::string_to_vector(std::string str, char separator)
{
    std::vector<std::string> array;
    std::string temp;
    size_t len = str.size();

    for (size_t i = 0; i < len; i++) {
        if (str[i] == separator) {
            if (temp != "") {
                array.push_back(temp);
                temp = "";
            }
        }
        else
            temp.push_back(str[i]);
    }
    if (temp != "")
        array.push_back(temp);
    return array;
}