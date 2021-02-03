/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <ios>

void file_get_write_stdout(char *path)
{
    std::ifstream file;
    file.open(path, std::ifstream::in);

    if (file.is_open()) {
        char c = file.get();

        while (file.good()) {
            std::cout << c;
            c = file.get();
        }
    }
    else
        std::cerr << "my_cat: " << path << ": No such file or directory" << std::endl;
}

int main(int ac, char **av)
{
    if (ac < 2) {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return 84;
    }

    for (int i = 1; i < ac; i++)
        file_get_write_stdout(av[i]);

    return EXIT_SUCCESS;
}