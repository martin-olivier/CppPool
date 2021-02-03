/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#ifndef ELEMENT_GRAPH_HPP_
#define ELEMENT_GRAPH_HPP_

#include "MyGKrellm_graphical.hpp"

class ElementGraph
{
public:
    ElementGraph();
    ~ElementGraph();

    int getX() const;
    int getY() const;
    sf::Sprite getSprite() const;
    sf::Text getText() const;
    void setX(int x);
    void setY(int y);
    void setTexture(std::string pathTexture);
    void setSprite(int left, int top, int width, int height);
    void setText(std::string textContent, int characterSize,
                 int textPostionX, int textPostionY);

protected:
    int _x;
    int _y;
    sf::Sprite _sprite;
    sf::Texture *_texture;
    sf::Text _text;
};

#endif
