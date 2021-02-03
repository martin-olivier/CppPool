/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int ID)
{
    m_ID = ID;
    m_is_working = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << m_ID << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
    patient->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::ifstream file;
    std::string drug;
    file.open(filename, std::ifstream::in);

    if (file.is_open()) {
        char c = file.get();

        while (file.good()) {
            drug += c;
            c = file.get();
        }
        filename.erase(filename.size() - 7, 7);
        std::cout << "Nurse " << m_ID << ": Kreog! Mr." << filename << " needs a " << drug << "!" << std::endl;
        return drug;
    }
    return "";
}

void KoalaNurse::timeCheck(void)
{
    if (m_is_working == false) {
        std::cout << "Nurse " << m_ID << ": Time to get to work!" << std::endl;
        m_is_working = true;
        return;
    }
    std::cout << "Nurse " << m_ID << ": Time to go home to my eucalyptus forest!" << std::endl;
    m_is_working = false;
}

int KoalaNurse::getID(void)
{
    return m_ID;
}