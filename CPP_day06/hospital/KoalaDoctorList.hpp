/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef KoalaDoctorList_H
#define KoalaDoctorList_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include "KoalaDoctor.hpp"

class KoalaDoctorList
{
private:
    KoalaDoctor *m_doctor;
    KoalaDoctorList *m_next;
public:
    KoalaDoctorList(KoalaDoctor *doctor);
    ~KoalaDoctorList();
    bool isEnd(void);
    void append(KoalaDoctorList *list);
    KoalaDoctor *getFromName(std::string name);
    KoalaDoctorList *remove(KoalaDoctorList *list);
    KoalaDoctorList *removeFromName(std::string name);
    KoalaDoctor *getContent(void);
    KoalaDoctorList *getNext(void);
    void dump(void);
    void erease_first(void);
};

#endif