/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Squad.hpp"

Squad::Squad()
{
}

Squad::Squad(const Squad &add)
{
    for (int i = 0; add.m_array.size(); i++)
        m_array[i] = add.m_array[i]->clone();
}

Squad::~Squad()
{
    for (int i = 0; i < m_array.size(); i++)
        delete m_array[i];
}

int Squad::getCount() const
{
    return m_array.size();
}

ISpaceMarine* Squad::getUnit(int i)
{
    if (i >= m_array.size())
        return nullptr;
    return m_array[i];
}

int Squad::push(ISpaceMarine *add)
{
    if (add == nullptr)
        return m_array.size();
    for (int i = 0; i < m_array.size(); i++) {
        if (m_array[i] == add)
            return m_array.size();
    }
    m_array.push_back(add->clone());
    return m_array.size();
}

std::vector<ISpaceMarine *>Squad::get_vector(void)
{
    return m_array;
}