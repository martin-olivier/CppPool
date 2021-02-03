/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "TableRand.hpp"

TableRand::TableRand()
{
    m_collapse = false;
    srand((unsigned) time(0));
    for (int i = 0; i < 10; i++) {
        int result = (rand() % 1);
        if (result == 0)
            m_content.push_back(new Teddy("Teddyyy"));
        else if (result == 1)
            m_content.push_back(new LittlePony("Ponyyyy"));
    }
}

TableRand::~TableRand()
{

}