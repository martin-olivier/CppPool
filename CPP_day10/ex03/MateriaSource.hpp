/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef MateriaSource_H
#define MateriaSource_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
private:
    std::vector<AMateria*> m_learn;
public:
    MateriaSource();
    ~MateriaSource();
    AMateria *createMateria(std::string const & type);
    void learnMateria(AMateria *);
};

#endif