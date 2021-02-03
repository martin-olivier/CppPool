/*
** EPITECH PROJECT, 2020
** B-CPP-300-PAR-3-2-CPPrush3-noe.jais
** File description:
** DisplayRAM.hpp
*/

#ifndef DISPLAYRAM_HPP_
#define DISPLAYRAM_HPP_

#include "ElementGraph.hpp"

class DisplayRAM
{
public:
    DisplayRAM();
    ~DisplayRAM();

    void displayFieldsRAM(sf::RenderWindow *window) const;
    MonitorRam getMonitorRam();
    void refreshFieldsRAM();
    bool getIsDisplay() const { return isDisplay; };
    void setIsDisplay(bool state) { isDisplay = state; };
private:
    bool isDisplay;
    MonitorRam data;
    ElementGraph m_element;
    std::map<std::string, std::string> fieldsRAM;
};

#endif
