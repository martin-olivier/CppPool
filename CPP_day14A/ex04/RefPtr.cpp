/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "RefPtr.hpp"

RefPtr::RefPtr()
{
    _rawPtr = nullptr;
}

RefPtr::RefPtr(BaseComponent *rawPtr)
{
    _rawPtr = rawPtr;
}

RefPtr::RefPtr(RefPtr const &other)
{
    _rawPtr = other._rawPtr;
}

RefPtr &RefPtr::operator=(RefPtr const &other)
{
    this->_rawPtr = other._rawPtr;
    return *this;
}

RefPtr::~RefPtr()
{
    delete this->_rawPtr;
}

BaseComponent *RefPtr::get() const
{
    return _rawPtr;
}