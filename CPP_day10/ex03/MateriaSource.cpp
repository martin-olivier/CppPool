/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int len = m_learn.size();
    if (len == 0)
        return nullptr;
    len -= 1;
    for (; len >= 0; len--) {
        if (m_learn[len]->getType() == type) {
            if (type == "cure")
                return (new Cure());
            if (type == "ice")
                return (new Ice());
        }
    }
    return nullptr;
}

void MateriaSource::learnMateria(AMateria *mat)
{
    if (!mat)
        return;
    if (m_learn.size() == 4)
        return;
    m_learn.push_back(mat);
}