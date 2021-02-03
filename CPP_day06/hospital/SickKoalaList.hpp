/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef SickKoalaList_H
#define SickKoalaList_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include "SickKoala.hpp"

class SickKoalaList
{
private:
    SickKoala *m_patient;
    SickKoalaList *m_next;
public:
    SickKoalaList(SickKoala *patient);
    ~SickKoalaList();
    bool isEnd(void);
    void append(SickKoalaList *list);
    SickKoala *getFromName(std::string name);
    SickKoalaList *remove(SickKoalaList *list);
    SickKoalaList *removeFromName(std::string name);
    SickKoala *getContent(void);
    SickKoalaList *getNext(void);
    void dump(void);
    void erease_first(void);
};

#endif