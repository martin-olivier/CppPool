/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef BorgQueen_H
#define BorgQueen_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include "Federation.hpp"
#include "Borg.hpp"

namespace Federation {
    namespace Starfleet {
        class Admiral;
    };
};

namespace Borg {
    class Ship;
};

namespace Borg
{
    class BorgQueen
    {
    private:
        
    public:
        BorgQueen();
        ~BorgQueen();
        bool (Borg::Ship::*movePtr)(Destination);
        void (Borg::Ship::*firePtr)(Federation::Starfleet::Ship *);
        void (Borg::Ship::*destroyPtr)(Federation::Ship *);
        bool move(Borg::Ship *ship, Destination dest);
        void fire(Borg::Ship *ship, Federation::Starfleet::Ship *target);
        void destroy(Borg::Ship *ship, Federation::Ship *target);
    };
}

#endif