/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "EventManager.hpp"

bool qsort_list(Event const& event_1, Event const& event_2)
{
    if (event_1.getTime() >= event_2.getTime())
        return false;
    return true;
}

EventManager::EventManager() : m_list(), m_actual_time(0)
{
}

EventManager::~EventManager()
{
}

EventManager::EventManager(EventManager const &other) : m_list(other.m_list), m_actual_time(other.m_actual_time)
{
}

EventManager &EventManager::operator=(EventManager const &rhs)
{
    m_list = rhs.m_list;
    m_actual_time = rhs.m_actual_time;
    return *this;
}

void EventManager::addEvent(const Event &e)
{
    if (e.getTime() <= m_actual_time)
        return;
    m_list.push_back(e);
    m_list.sort(qsort_list);
}

void EventManager::removeEventsAt(unsigned int time)
{
    std::list<Event>::iterator it = m_list.begin();

    while (it != m_list.end()) {
        if (it->getTime() == time)
            m_list.erase(it++);
        else
            it++;
    }
}

void EventManager::dumpEvents() const
{
    std::list<Event> tmp = m_list;
    std::list<Event>::iterator it = tmp.begin();

    while (it != tmp.end() && it->getTime() <= m_actual_time)
        it++;

    while (it != tmp.end()) {
        std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
        it++;
    }
}

void EventManager::dumpEventAt(unsigned int time) const
{
    std::list<Event> tmp = m_list;
    std::list<Event>::iterator it = tmp.begin();

    while (it != tmp.end() && it->getTime() <= m_actual_time)
        it++;

    while (it != tmp.end()) {
        if (it->getTime() == time)
            std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
        it++;
    }
}

void EventManager::addTime(unsigned int time)
{
    std::list<Event>::iterator it = m_list.begin();

    while (it != m_list.end() && it->getTime() <= m_actual_time)
        it++;

    m_actual_time += time;
    while (it != m_list.end() && it->getTime() <= m_actual_time) {
        std::cout << it->getEvent() << std::endl;
        it++;
    }
}

void EventManager::addEventList(const std::list<Event> &event)
{
    std::list<Event> temp = event;
    std::list<Event>::iterator it = temp.begin();

    for (size_t i = 0; i < event.size(); i++) {
        Event ev_tmp(it->getTime(), it->getEvent());
        m_list.push_back(ev_tmp);
        it++;
    }
    m_list.sort(qsort_list);
}