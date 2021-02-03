/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "DroidMemory.hpp"

std::ostream& operator<<(std::ostream &flux, const DroidMemory &a)
{
    flux << "DroidMemory '" << a.getFingerprint() << "', " << a.getExp();
    return flux;
}

DroidMemory& DroidMemory::operator<<(const DroidMemory &a)
{
    this->setExp(this->getExp() + a.getExp());
    this->setFingerprint(this->getFingerprint() ^ a.getFingerprint());

    return *this;
}

DroidMemory& DroidMemory::operator>>(const DroidMemory &a)
{
    this->setExp(this->getExp() + a.getExp());
    this->setFingerprint(this->getFingerprint() ^ a.getFingerprint());

    return *this;
}

void DroidMemory::operator+=(const DroidMemory &druid)
{
    *this << druid;
}

void DroidMemory::operator+=(const size_t exp)
{
    this->setExp(this->getExp() + exp);
    this->setFingerprint(this->getFingerprint() ^ exp);
}

DroidMemory& DroidMemory::operator+(const DroidMemory &druid) const
{
    DroidMemory *tmp = new DroidMemory;

    *tmp += *this;
    *tmp += druid;

    return (*tmp);
}

DroidMemory& DroidMemory::operator+(const size_t &exp) const
{
    DroidMemory *tmp = new DroidMemory;

    tmp->setExp(tmp->getExp() + exp);
    tmp->setFingerprint(tmp->getFingerprint() ^ exp);

    return (*tmp);
}

DroidMemory::DroidMemory(void)
{
    m_exp = 0;
    m_fingerprint = random();
}

DroidMemory::~DroidMemory()
{
}

size_t DroidMemory::getFingerprint(void) const
{
    return m_fingerprint;
}

size_t DroidMemory::getExp(void) const
{
    return m_exp;
}

void DroidMemory::setFingerprint(size_t fingerprint)
{
    m_fingerprint = fingerprint;
}

void DroidMemory::setExp(size_t exp)
{
    m_exp = exp;
}