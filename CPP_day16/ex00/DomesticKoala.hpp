/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef DomesticKoala_H
#define DomesticKoala_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include "KoalaAction.hpp"

class DomesticKoala
{
private:
    std::vector<void(KoalaAction::*)(const std::string &)> methodPointer_t;
    KoalaAction *m_action;
    std::string m_param;
public:
    DomesticKoala(KoalaAction &);
    ~DomesticKoala();
    DomesticKoala(const DomesticKoala &);
    DomesticKoala &operator=(const DomesticKoala &);
    const std::vector<void(KoalaAction::*)(const std::string &)> *getActions() const;
    void learnAction(unsigned char command, void(KoalaAction::*action)(const std::string &));
    void unlearnAction(unsigned char command);
    void doAction(unsigned char command, const std::string &param);
    void setKoalaAction(KoalaAction &);
};

#endif