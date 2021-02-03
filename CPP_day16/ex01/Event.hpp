/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Event_H
#define Event_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <list>

class Event
{
private:
    unsigned int m_time;
    std::string m_event;
public:
    Event();
    Event(unsigned int time, const std::string &event);
    ~Event();
    Event(const Event &other);
    Event &operator=(const Event &rhs);
    unsigned int getTime() const;
    const std::string &getEvent() const;
    void setTime(unsigned int time);
    void setEvent(const std::string &event);
};

#endif