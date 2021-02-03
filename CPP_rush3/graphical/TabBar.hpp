/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#ifndef TAB_BAR_HPP_
#define TAB_BAR_HPP_

#include "Button.hpp"

class TabBar
{
public:
    TabBar();
    ~TabBar();

    void setWhichOneIsOpen(int idx) { WhichOneIsOpen = idx; };
    void displayTabBar(sf::RenderWindow *window) const;
private:
    int WhichOneIsOpen;
    std::vector<Button> buttonList;
};

#endif
