/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    m_name = name;
    m_is_working = false;
    std::cout << "Dr." << m_name << ": I'm Dr." << m_name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::vector<std::string> list;
    list.push_back("Mars");
    list.push_back("Kinder");
    list.push_back("Crunch");
    list.push_back("Maroilles");
    list.push_back("Eucalyptus leaf");

    std::cout << "Dr." << m_name << ": So what's goerking you Mr." << patient->getName() << "?" << std::endl;
    patient->poke();
    std::string filename = patient->getName() + ".report";
    int i = random() % 5;
    std::ofstream file(filename);
    file << list.at(i);
    file.close();
}

void KoalaDoctor::timeCheck(void)
{
    if (m_is_working == false) {
        std::cout << "Dr." << m_name << ": Time to get to work!" << std::endl;
        m_is_working = true;
        return;
    }
    std::cout << "Dr." << m_name << ": Time to go home to my eucalyptus forest!" << std::endl;
    m_is_working = false;
}

std::string KoalaDoctor::getName(void)
{
    return m_name;
}