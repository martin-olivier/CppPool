/*
** EPITECH PROJECT, 2020
** B-CPP-300-PAR-3-2-CPPrush3-noe.jais
** File description:
** DisplayCPU.hpp
*/

#ifndef DISPLAYCPU_HPP_
#define DISPLAYCPU_HPP_

#include "ElementGraph.hpp"

class DisplayCPU
{
public:
    DisplayCPU();
    ~DisplayCPU();

    void displayFieldsCPU(sf::RenderWindow *window) const;
    MonitorCore getMonitorCpu();
    void refreshFieldsCPU();
    bool getIsDisplay() const { return isDisplay; };
    void setIsDisplay(bool state) { isDisplay = state; };
private:
    bool isDisplay;
    MonitorCore data;
    ElementGraph m_element;
    std::map<std::string, std::string> fieldsCore;
};

#endif
