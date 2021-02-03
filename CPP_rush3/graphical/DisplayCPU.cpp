/*
** EPITECH PROJECT, 2020
** B-CPP-300-PAR-3-2-CPPrush3-noe.jais
** File description:
** DisplayCPU.cpp
*/

#include "DisplayCPU.hpp"

DisplayCPU::DisplayCPU() : isDisplay(false), m_element()
{
    fieldsCore.insert(std::pair<const std::string, std::string>("Nb de processus : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("Nb de coeurs : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("Model : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("MHz : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("% d'utilisation : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("User : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("Nice : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("System : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("Idle : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("IOWait : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("irq : ", ""));
    fieldsCore.insert(std::pair<const std::string, std::string>("softirq : ", ""));
}

DisplayCPU::~DisplayCPU() {}

MonitorCore DisplayCPU::getMonitorCpu()
{
    return data;
}

void DisplayCPU::refreshFieldsCPU()
{
    data.refresh();
    fieldsCore["Nb de processus : "] = std::to_string(data.get_procs_running());
    fieldsCore["Nb de coeurs : "] = std::to_string(data.get_nb_core());
    fieldsCore["Model : "] = data.get_model();
    fieldsCore["MHz : "] = std::to_string(data.get_GHz());
    fieldsCore["% d'utilisation : "] = std::to_string(data.get_percentage());
    fieldsCore["User : "] = std::to_string(data.get_user());
    fieldsCore["Nice : "] = std::to_string(data.get_nice());
    fieldsCore["System : "] = std::to_string(data.get_system());
    fieldsCore["Idle : "] = std::to_string(data.get_idle());
    fieldsCore["IOWait : "] = std::to_string(data.get_iowait());
    fieldsCore["irq : "] = std::to_string(data.get_irq());
    fieldsCore["softirq : "] = std::to_string(data.get_softirq());
}

void DisplayCPU::displayFieldsCPU(sf::RenderWindow *window) const
{
    int xPos = 10;
    int yPos = 125;
    sf::Font myFont;
    sf::Text dataText;

    myFont.loadFromFile("graphical/text/Consolas.ttf");
    dataText.setFont(myFont);
    dataText.setCharacterSize(30);
    dataText.setFillColor(sf::Color::White);
    for (const auto& field: fieldsCore) {
        dataText.setPosition(xPos, yPos);
        dataText.setString(field.first + field.second);
        window->draw(dataText);
        yPos += 60;
    }
}
