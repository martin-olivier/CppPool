/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "ElementGraph.hpp"

ElementGraph::ElementGraph() : _x(0), _y(0), _sprite(), _texture(new sf::Texture), _text() {}

ElementGraph::~ElementGraph() {}

int ElementGraph::getX() const
{
    return _x;
}

int ElementGraph::getY() const
{
    return _y;
}

sf::Sprite ElementGraph::getSprite() const
{
    return _sprite;
}

sf::Text ElementGraph::getText() const
{
    return _text;
}

void ElementGraph::setX(int x)
{
    _x = x;
}

void ElementGraph::setY(int y)
{
    _y = y;
}

void ElementGraph::setTexture(std::string pathTexture)
{
    _texture->loadFromFile(pathTexture);
}

void ElementGraph::setSprite(int left, int top, int width, int height)
{
    _sprite.setTexture(*_texture);
    _sprite.setTextureRect(sf::IntRect(left, top, width, height));
    _sprite.setPosition(sf::Vector2f(_x, _y));
}

void ElementGraph::setText(std::string textContent, int characterSize,
                           int textPostionX, int textPostionY)
{
    sf::Font *myFont;

    myFont->loadFromFile("graphical/text/Consolas.ttf");
    _text.setFont(*myFont);
    _text.setString(textContent);
    _text.setCharacterSize(characterSize);
    _text.setFillColor(sf::Color::White);
    _text.setPosition(textPostionX, textPostionY);
}
