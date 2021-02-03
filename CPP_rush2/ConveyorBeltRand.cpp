/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "ConveyorBeltRand.hpp"

ConveyorBeltRand::ConveyorBeltRand() : PapaXmasConveyorBelt()
{

}

ConveyorBeltRand::~ConveyorBeltRand()
{

}

void ConveyorBeltRand::in_button(void)
{
    if (m_obj) {
        std::cout << "There is already an object on the ConveyorBelt" << std::endl;
        return;
    }
    m_obj = new Wrap("Wrap");
    srand((unsigned) time(0));
    int result = (rand() % 1);
    if (result == 0)
        m_obj = new Box("Box");
    else if (result == 1)
        m_obj = new GiftPaper("GiftPaper");
}

void ConveyorBeltRand::out_button(void)
{
    if (!m_obj) {
        std::cout << "There is no object to send to Santa on the ConveyorBelt" << std::endl;
        return;
    }
    std::cout << "Sending an object to Santa" << std::endl;
    m_obj = nullptr;
    // XML TALK ->_>
}