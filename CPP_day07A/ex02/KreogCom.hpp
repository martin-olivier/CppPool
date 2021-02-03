/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef KreogCom_H
#define KreogCom_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

class KreogCom
{
private:
    const int m_x;
    const int m_y;
    const int m_serial;
    KreogCom *m_next;
    KreogCom *m_prev;
public:
    KreogCom(int x, int y, int serial);
    ~KreogCom();
    void addCom(int x, int y, int serial);
    void removeCom(void);
    KreogCom *getCom(void) const;
    void ping(void) const;
    void locateSquad(void) const;
};

#endif