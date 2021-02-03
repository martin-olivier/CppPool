/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include "ElementGraph.hpp"

class Button
{
public:
    Button(int left, int top, int width, int height, int x, int y);
    ~Button();

    bool getIsActive() { return isActive; };
    ElementGraph getButtonActivate() { return buttonActivate; };
    ElementGraph getButtonNoActivate() { return buttonActivate; };
private:
    bool isActive;
    ElementGraph buttonActivate;
    ElementGraph buttonNoActivate;
    sf::Text _text;
};

#endif
