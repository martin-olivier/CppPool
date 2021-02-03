/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#ifndef DISPLAY_OS_HPP_
#define DISPLAY_OS_HPP_

#include "ElementGraph.hpp"

class DisplayOS
{
public:
    DisplayOS();
    ~DisplayOS();

    void displayFieldsOS(sf::RenderWindow *window) const;
    MonitorOs getMonitorOs();
    void refreshFieldsOS();
    bool getIsDisplay() const { return isDisplay; };
    void setIsDisplay(bool state) { isDisplay = state; };
private:
    bool isDisplay;
    MonitorOs data;
    ElementGraph m_element;
    std::map<std::string, std::string> fieldsOS;
};

#endif
