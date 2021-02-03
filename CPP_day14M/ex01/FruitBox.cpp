/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    m_size = size;
    m_data = nullptr;
}

FruitBox::~FruitBox()
{
}

int FruitBox::nbFruits() const
{
    if (!m_data)
        return 0;

    FruitNode *tmp = m_data;
    int i = 0;

    while (tmp) {
        i++;
        tmp = tmp->next;
    }
    return i;
}

bool FruitBox::putFruit(Fruit *f)
{
    if (f == nullptr)
        return false;

    if (!m_data) {
        m_data = new FruitNode(f);
        return true;
    }

    FruitNode *tmp = m_data;
    int i = 1;

    if (tmp->data == f)
        return false;

    while (tmp->next) {
        if (tmp->data == f)
            return false;
        i++;
        tmp = tmp->next;
    }
    if (tmp->data == f)
        return false;
    if (i >= m_size)
        return false;
    
    tmp->next = new FruitNode(f);
    return true;
}

Fruit *FruitBox::pickFruit()
{
    if (!m_data)
        return nullptr;

    FruitNode *tmp = m_data;

    m_data = m_data->next;
    return tmp->data;
}

FruitNode *FruitBox::head() const
{
    if (!m_data)
        return nullptr;
    return m_data;
}