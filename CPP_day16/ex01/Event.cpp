/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Event.hpp"

Event::Event() : m_time(0), m_event("")
{
}

Event::Event(unsigned int time, const std::string &event) : m_time(time), m_event(event)
{
}

Event::~Event()
{
}

Event::Event(const Event &other) : m_time(other.m_time), m_event(other.m_event)
{
}

Event &Event::operator=(const Event &rhs)
{
    m_time = rhs.m_time;
    m_event = rhs.m_event;
    return *this;
}

unsigned int Event::getTime() const
{
    return m_time;
}

const std::string &Event::getEvent() const
{
    return m_event;
}

void Event::setTime(unsigned int time)
{
    m_time = time;
}

void Event::setEvent(const std::string &event)
{
    m_event = event;
}