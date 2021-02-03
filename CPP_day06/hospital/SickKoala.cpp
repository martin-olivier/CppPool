/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    m_name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << m_name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke(void)
{
    std::cout << "Mr." << m_name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    if (str == "Mars") {
        std::cout << "Mr." << m_name << ": Mars, and it kreogs!" << std::endl;
        return true;
    }
    else if (str == "Kinder") {
        std::cout << "Mr." << m_name << ": There is a toy inside!" << std::endl;
        return true;
    }
    std::cout << "Mr." << m_name << ": Goerkreog!" << std::endl;
    return false;
}

void SickKoala::overDrive(std::string str)
{
    std::cout << "Mr." << m_name << ": ";

    size_t pos;
    std::string rep = "1337!";
    while ((pos = str.find("Kreog!")) != std::string::npos) {
        str.replace(pos, 6, rep);
    }
    std::cout << str << std::endl;
}

std::string SickKoala::getName(void)
{
    return m_name;
}