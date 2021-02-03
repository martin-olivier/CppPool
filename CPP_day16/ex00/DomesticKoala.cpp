/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &a)
{
    m_action = &a;
    methodPointer_t.resize(256);
}

DomesticKoala::~DomesticKoala()
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &a)
{
    m_param = a.m_param;
    methodPointer_t = a.methodPointer_t;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &a)
{
    m_param = a.m_param;
    methodPointer_t = a.methodPointer_t;
    return *this;
}

const std::vector<void(KoalaAction::*)(const std::string &)> *DomesticKoala::getActions() const
{
    return &methodPointer_t;
}

void DomesticKoala::learnAction(unsigned char command, void(KoalaAction::*action)(const std::string &))
{
    methodPointer_t[command] = action;
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    methodPointer_t.erase(methodPointer_t.begin() + command);
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    if (!methodPointer_t[command])
        return;
    (m_action->*(methodPointer_t[command]))(param);
}

void DomesticKoala::setKoalaAction(KoalaAction &a)
{
    m_action = &a;
}