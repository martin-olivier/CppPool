/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "ElementGraph.hpp"
#include "DisplayOS.hpp"
#include "DisplayCPU.hpp"
#include "DisplayRAM.hpp"
#include "TabBar.hpp"
#include "MyGKrellm_graphical.hpp"

static void display_all(sf::RenderWindow &window,
                        DisplayOS& myOS, DisplayCPU& myCPU, DisplayRAM& myRAM,
                        TabBar& tabBar)
{
    tabBar.displayTabBar(&window);
    if (myOS.getIsDisplay()) {
        myOS.refreshFieldsOS();
        myOS.displayFieldsOS(&window);
    }
    if (myCPU.getIsDisplay()) {
        myCPU.refreshFieldsCPU();
        myCPU.displayFieldsCPU(&window);
    }
    if (myRAM.getIsDisplay()) {
        myRAM.refreshFieldsRAM();
        myRAM.displayFieldsRAM(&window);
    }
}

void whatDisplay(sf::Vector2i mousePos, DisplayOS& myOS, DisplayCPU& myCPU, DisplayRAM& myRAM)
{
    if ((mousePos.x >= 0 && mousePos.x < 384)
        && (mousePos.y >= 0 && mousePos.y < 100)) {
        myOS.setIsDisplay(true);
        myCPU.setIsDisplay(false);
        myRAM.setIsDisplay(false);
    } else if ((mousePos.x >= 384 && mousePos.x < 384 * 2)
               && (mousePos.y >= 0 && mousePos.y < 100)) {
        myCPU.setIsDisplay(true);
        myOS.setIsDisplay(false);
        myRAM.setIsDisplay(false);
    } else if ((mousePos.x >= 384 * 2 && mousePos.x < 384 * 3)
               && (mousePos.y >= 0 && mousePos.y < 100)) {
        myRAM.setIsDisplay(true);
        myCPU.setIsDisplay(false);
        myOS.setIsDisplay(false);
    }
}

void graphical_display(SystemData &data)
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080, 32),
                            "MyGKrellm", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
    TabBar tabBar;
    DisplayOS myOS;
    DisplayCPU myCPU;
    DisplayRAM myRAM;
    ElementGraph background;
    background.setTexture("graphical/sprite/background.jpg");
    background.setSprite(0, 0, 1920, 1080);
    background.getSprite().setScale(1.2, 1.35);

    while (window.isOpen()) {
        data.refresh();
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed &&
                sf::Mouse::isButtonPressed(sf::Mouse::Left) == true)
                whatDisplay(sf::Mouse::getPosition(window), myOS, myCPU, myRAM);
        }
        window.clear(sf::Color::White);
        window.draw(background.getSprite());
        display_all(window, myOS, myCPU, myRAM, tabBar);
        window.display();
    }
}

void MyGKrellm_graphical(SystemData data)
{
    graphical_display(data);
}
