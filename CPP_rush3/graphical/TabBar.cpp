/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "TabBar.hpp"

TabBar::TabBar()
{
    Button button1(0, 0, 384, 100, 0, 0);
    Button button2(0, 0, 384, 100, 384, 0);
    Button button3(0, 0, 384, 100, 384 * 2, 0);
    Button button4(0, 0, 384, 100, 384 * 3, 0);
    Button button5(0, 0, 384, 100, 384 * 4, 0);

    buttonList.push_back(button1);
    buttonList.push_back(button2);
    buttonList.push_back(button3);
    buttonList.push_back(button4);
    buttonList.push_back(button5);
}

TabBar::~TabBar() {}

void TabBar::displayTabBar(sf::RenderWindow *window) const
{
    int xPos = 50;
    int yPos = 25;
    int i = 0;
    std::vector<std::string> print = { "OS_INFORMATIONS", "CPU_INFORMATIONS",
                                       "RAM_INFORMATIONS", "NET_INFORMATIONS", "PID_INFORMATIONS" };
    sf::Font myFont;
    sf::Text dataText;

    myFont.loadFromFile("graphical/text/Consolas.ttf");
    dataText.setFont(myFont);
    dataText.setCharacterSize(30);
    dataText.setFillColor(sf::Color::White);
    for (auto button: buttonList) {
        dataText.setPosition(xPos, yPos);
        dataText.setString(print[i]);
        if (!button.getIsActive())
            window->draw(button.getButtonNoActivate().getSprite());
        else
            window->draw(button.getButtonActivate().getSprite());
        window->draw(dataText);
        i++;
        xPos += 384;
    }
}
