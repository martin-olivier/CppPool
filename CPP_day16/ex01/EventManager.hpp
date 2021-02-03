/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef EventManager_H
#define EventManager_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <list>
#include "Event.hpp"

class EventManager
{
private:
    std::list<Event> m_list;
    unsigned int m_actual_time;
public:
    EventManager();
    ~EventManager();
    EventManager(EventManager const &other);
    EventManager &operator=(EventManager const &rhs);
    void addEvent(const Event &e);
    void removeEventsAt(unsigned int time);
    void dumpEvents() const ;
    void dumpEventAt(unsigned int time) const;
    void addTime(unsigned int time);
    void addEventList(const std::list<Event> &event);
};

#endif