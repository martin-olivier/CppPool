/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "Button.hpp"

Button::Button(int left, int top, int width, int height, int x, int y) : isActive(false)
{
    buttonActivate.setTexture("graphical/sprite/bouton_gris.png");
    buttonNoActivate.setTexture("graphical/sprite/bouton_gris.png");
    buttonActivate.setX(x);
    buttonNoActivate.setX(x);
    buttonActivate.setY(y);
    buttonNoActivate.setY(y);
    buttonActivate.setSprite(left, top, width, height);
    buttonNoActivate.setSprite(left, top, width, height);
}

Button::~Button() {}
