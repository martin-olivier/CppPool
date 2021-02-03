/*
** EPITECH PROJECT, 2020
** B-CPP-300-PAR-3-2-CPPrush3-noe.jais
** File description:
** DisplayRAM.cpp
*/

#include "DisplayRAM.hpp"

DisplayRAM::DisplayRAM() : isDisplay(false), m_element()
{
    fieldsRAM.insert(std::pair<const std::string, std::string>("% d'utilisation : ", ""));
    fieldsRAM.insert(std::pair<const std::string, std::string>("Total : ", ""));
    fieldsRAM.insert(std::pair<const std::string, std::string>("Used : ", ""));
    fieldsRAM.insert(std::pair<const std::string, std::string>("Free : ", ""));
    fieldsRAM.insert(std::pair<const std::string, std::string>("Shared : ", ""));
    fieldsRAM.insert(std::pair<const std::string, std::string>("Cache : ", ""));
    fieldsRAM.insert(std::pair<const std::string, std::string>("Available : ", ""));
}

DisplayRAM::~DisplayRAM() {}

MonitorRam DisplayRAM::getMonitorRam()
{
    return data;
}

void DisplayRAM::refreshFieldsRAM()
{
    data.refresh();
    fieldsRAM["% d'utilisation : "] = std::to_string(data.get_percentage());
    fieldsRAM["Total : "] = std::to_string(data.get_total());
    fieldsRAM["Used : "] = std::to_string(data.get_used());
    fieldsRAM["Free : "] = std::to_string(data.get_free());
    fieldsRAM["Shared : "] = std::to_string(data.get_shared());
    fieldsRAM["Cache : "] = std::to_string(data.get_cache());
    fieldsRAM["Available : "] = std::to_string(data.get_available());
}

void DisplayRAM::displayFieldsRAM(sf::RenderWindow *window) const
{
    int xPos = 10;
    int yPos = 125;
    sf::Font myFont;
    sf::Text dataText;

    myFont.loadFromFile("graphical/text/Consolas.ttf");
    dataText.setFont(myFont);
    dataText.setCharacterSize(30);
    dataText.setFillColor(sf::Color::White);
    for (const auto& field: fieldsRAM) {
        dataText.setPosition(xPos, yPos);
        dataText.setString(field.first + field.second);
        window->draw(dataText);
        yPos += 60;
    }
}
