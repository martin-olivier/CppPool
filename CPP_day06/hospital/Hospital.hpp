/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Hospital_H
#define Hospital_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include "KoalaDoctorList.hpp"
#include "KoalaNurseList.hpp"
#include "SickKoalaList.hpp"

class Hospital
{
private:
    KoalaDoctorList *m_doctor_list;
    SickKoalaList *m_sick_list;
    KoalaNurseList *m_nurse_list;
public:
    Hospital();
    ~Hospital();
    void addDoctor(KoalaDoctorList *list);
    void addSick(SickKoalaList *list);
    void addNurse(KoalaNurseList *list);
    void run(void);
    int get_doc_len(void);
    int get_nur_len(void);
    int get_sic_len(void);
};

#endif