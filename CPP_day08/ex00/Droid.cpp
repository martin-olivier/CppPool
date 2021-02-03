/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Droid.hpp"

bool Droid::operator==(const Droid &a) const
{
    if (this->getAttack() != a.getAttack())
        return false;
    if (this->getEnergy() != a.getEnergy())
        return false;
    if (this->getId() != a.getId())
        return false;
    if (*(this->getStatus()) != *(a.getStatus()))
        return false;
    if (this->getToughness() != a.getToughness())
        return false;
    return true;
}

bool Droid::operator!=(const Droid &a) const
{
    if (*this == a)
        return false;
    return true;
}

Droid& Droid::operator<<(size_t &add)
{
    if ((100 - m_energy) > add) {
        add -= add;
        m_energy += add;
    }
    else {
        add -= (100 - m_energy);
        m_energy += (100 - m_energy);
    }
    return *this;
}

std::ostream& operator<<(std::ostream &flux, const Droid &a)
{
    flux << "Droid '" << a.getId() << "', " << *a.getStatus() << ", " << a.getEnergy();
    return flux;
}

Droid& Droid::operator=(const Droid &a)
{
    this->setEnergy(a.m_energy);
    this->setId(a.m_ID);
    this->setStatus(a.m_status);
    return *this;
}

Droid::Droid(std::string serial_number) : m_attack(25), m_toughness(15)
{
    m_energy = 50;
    m_status = new std::string("Standing by");
    m_ID = serial_number;
    std::cout << "Droid '" << m_ID << "' Activated" << std::endl;
}

Droid::Droid(const Droid &base) : m_attack(base.m_attack), m_toughness(base.m_toughness)
{
    m_energy = base.m_energy;
    m_status = new std::string;
    *m_status = *base.m_status;
    m_ID = base.m_ID;
    std::cout << "Droid '" << m_ID << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    std::cout << "Droid '" << m_ID << "' Destroyed" << std::endl;
}

std::string Droid::getId(void) const
{
    return m_ID;
}
    
size_t Droid::getEnergy(void) const
{
    return m_energy;
}

size_t Droid::getAttack(void) const
{
    return m_attack;
}
    
size_t Droid::getToughness(void) const
{
    return m_toughness;
}

std::string *Droid::getStatus(void) const
{
    return m_status;
}

void Droid::setId(std::string ID)
{
    m_ID = ID;
}
    
void Droid::setEnergy(size_t energy)
{
    if (energy > 100) {
        energy = 100;
        return;
    }
    m_energy = energy;
}

void Droid::setStatus(std::string *status)
{
    m_status = status;
}