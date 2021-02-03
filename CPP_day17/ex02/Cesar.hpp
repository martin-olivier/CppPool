/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Cesar_H
#define Cesar_H

#include <iostream>
#include <algorithm>

#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod
{
private:
    int m_index;
public:
    Cesar();
    ~Cesar();
    void encryptChar(char plainchar) override;
    void decryptChar(char cipherchar) override;
	void reset() override;
    bool isAlpha(char cara);
    bool isMaj(char cara);
    bool isMin(char cara);
};

#endif