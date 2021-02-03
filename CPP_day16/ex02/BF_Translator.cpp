/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "BF_Translator.hpp"

std::string file_get_write_stdout(const std::string &in)
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
        return data;
    }
    file.close();
    return "ERROR";
}

int BF_Translator::translate(const std::string &in, const std::string &out)
{
    std::map<char, char*> map;
    map['+'] = "(*c)++;";
    map['-'] = "(*c)--;";
    map['>'] = "c++;";
    map['<'] = "c--;";
    map['.'] = "write(1, c, 1);";
    map[','] = "read(0, c, 1);";
    map['['] = "while (*c) {";
    map[']'] = "}";
    std::string input = file_get_write_stdout(in);
    if (input == "ERROR")
        return -1;
    std::ofstream output;
    output.open(out);
    if (!output.is_open())
        return -1;
    output << "#include <stdio.h>" << std::endl;
    output << "#include <stdlib.h>" << std::endl;
    output << "#include <unistd.h>" << std::endl;
    output << "#include <string.h>" << std::endl << std::endl;
    output << "int main() {";
    output << "char *c = malloc(sizeof(char) * 61440);";
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != '+' && input[i] != '-' && input[i] != '<' && input[i] != '>' && input[i] != '.' && input[i] != ',' && input[i] != '[' && input[i] != ']' && input[i] != ' ' && input[i] != '\n' && input[i] != '\t')
            return -1;
        if (!(input[i] == ' ' || input[i] == '\n' || input[i] == '\t'))
            output << map[input[i]] << std::endl;
    }
    output << std::endl << "return 0;" << std::endl << "}";
    output.close();
    return 0;
}