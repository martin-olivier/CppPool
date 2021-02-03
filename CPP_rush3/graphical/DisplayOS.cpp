/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "DisplayOS.hpp"

DisplayOS::DisplayOS() : isDisplay(false), m_element()
{
    fieldsOS.insert(std::pair<const std::string, std::string>("Username : ", ""));
    fieldsOS.insert(std::pair<const std::string, std::string>("Hostname : ", ""));
    fieldsOS.insert(std::pair<const std::string, std::string>("OS : ", ""));
    fieldsOS.insert(std::pair<const std::string, std::string>("Kernel : ", ""));
    fieldsOS.insert(std::pair<const std::string, std::string>("Date : ", ""));
    fieldsOS.insert(std::pair<const std::string, std::string>("Time : ", ""));
}

DisplayOS::~DisplayOS() {}

MonitorOs DisplayOS::getMonitorOs()
{
    return data;
}

void DisplayOS::refreshFieldsOS()
{
    data.refresh();
    fieldsOS["Username : "] = data.get_username();
    fieldsOS["Hostname : "] = data.get_hostname();
    fieldsOS["OS : "] = data.get_os();
    fieldsOS["Kernel : "] = data.get_kernel();
    fieldsOS["Date : "] = data.get_date();
    fieldsOS["Time : "] = data.get_time();
}

void DisplayOS::displayFieldsOS(sf::RenderWindow *window) const
{
    int xPos = 10;
    int yPos = 125;
    sf::Font myFont;
    sf::Text dataText;

    myFont.loadFromFile("graphical/text/Consolas.ttf");
    dataText.setFont(myFont);
    dataText.setCharacterSize(30);
    dataText.setFillColor(sf::Color::White);
    for (const auto& field: fieldsOS) {
        dataText.setPosition(xPos, yPos);
        dataText.setString(field.first + field.second);
        window->draw(dataText);
        yPos += 60;
    }
}
