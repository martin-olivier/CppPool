/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef KoalaNurseList_H
#define KoalaNurseList_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include "KoalaNurse.hpp"

class KoalaNurseList
{
private:
    KoalaNurse *m_nurse;
    KoalaNurseList *m_next;
public:
    KoalaNurseList(KoalaNurse *nurse);
    ~KoalaNurseList();
    bool isEnd(void);
    void append(KoalaNurseList *list);
    KoalaNurse *getFromID(int ID);
    KoalaNurseList *remove(KoalaNurseList *list);
    KoalaNurseList *removeFromID(int ID);
    KoalaNurse *getContent(void);
    KoalaNurseList *getNext(void);
    void dump(void);
    void erease_first(void);
};

#endif