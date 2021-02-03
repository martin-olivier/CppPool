/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "SimplePtr.hpp"

SimplePtr::SimplePtr(BaseComponent *rawPtr)
{
    _rawPtr = rawPtr;
}

SimplePtr::SimplePtr(SimplePtr const &a)
{
    _rawPtr = a._rawPtr;
}

SimplePtr::~SimplePtr()
{
    delete this->_rawPtr;
}

BaseComponent *SimplePtr::get() const
{
    return _rawPtr;
}

SimplePtr &SimplePtr::operator=(SimplePtr const &a)
{
    this->_rawPtr = a._rawPtr;
    return *this;
}