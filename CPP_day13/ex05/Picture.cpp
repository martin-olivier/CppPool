/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Picture.hpp"

Picture::Picture()
{
    data = "";
}

Picture::Picture(const Picture &copy)
{
    data = copy.data;
}

Picture::Picture(const std::string &file)
{
    getPictureFromFile(file);
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream content;
    content.open(file, std::ifstream::in);
    data = "";

    if (content.is_open()) {
        char c = content.get();

        while (content.good()) {
            data.push_back(c);
            c = content.get();
        }
        return true;
    }
    else {
        data = "ERROR";
        return false;
    }
    return false;
}

Picture &Picture::operator=(const Picture &copy)
{
    data = copy.data;
    return *this;
}