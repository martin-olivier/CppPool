/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Admiral_H
#define Admiral_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

namespace Federation {
    namespace Starfleet {
        class Admiral;
    };
};

#include "Federation.hpp"
#include "Borg.hpp"

namespace Federation {
    namespace Starfleet {
        class Admiral {
        private:
            std::string _name;
        public:
            Admiral(std::string);
            ~Admiral();
            bool (Federation::Starfleet::Ship:: *movePtr)(Destination);
            void (Federation::Starfleet::Ship:: *firePtr)(Borg::Ship *);
            void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
            bool move(Federation::Starfleet::Ship *ship, Destination dest);
        };
    };
};

#endif