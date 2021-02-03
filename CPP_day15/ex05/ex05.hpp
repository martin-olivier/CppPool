/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ex05_H
#define ex05_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <exception>

template<class T>
class array
{
public:
std::vector<T> m_array;
std::vector<unsigned int> m_pos;
size_t m_allocator;

array()
{
    m_allocator = 0;
}

array(array const& a)
{
    m_array = a.m_array;
    m_allocator = a.m_allocator;
    m_pos = a.m_pos;
}

array(unsigned int n)
{
    m_allocator = n;
}

~array()
{

}

unsigned int size()
{
    return m_allocator;
}

array<T>& operator=(array<T> const& a)
{
    m_array = a.m_array;
    m_allocator = a.m_allocator;
    m_pos = a.m_pos;
    return *this;
}

T& operator[](size_t i)
{
    if (i > m_allocator) {
        m_allocator = i;
    }
    for (int p = 0; p < m_pos.size(); p++)
        if (m_pos[p] == i)
            return m_array[m_pos[p]];
    m_pos.push_back(i);
    m_array.push_back(static_cast<T>(0));
    return m_array.back();
}

T& operator[](size_t i) const
{
    if (i > m_allocator)
        throw std::exception();
    for (int p = 0; p < m_pos.size(); p++)
        if (m_pos[p] == i)
            return m_array[m_pos[p]];
    return m_array.back();
}

void dump() const
{
    for (int i = 0; i < m_allocator; i++) {
        bool ok = false;
        for (int p = 0; p < m_pos.size(); p++) {
            if (m_pos[p] == i) {
                std::cout << m_array[m_pos[p]] << ", ";
                ok = true;
            }
            if (ok == false)
                std::cout << "0, ";
        }
    }
    std::cout << std::endl;
}

template<typename U>
array<U> convertTo(U(*convert)(const T&)) const
{
    array<U> tmp(m_allocator);
    for (int i = 0; i < m_allocator; i++) {
        tmp.m_array.push_back(convert(m_array[i]));
        tmp.m_pos.push_back(convert(m_pos[i]));
    }
    tmp.m_allocator = m_allocator;
    return tmp;
}
};

#endif