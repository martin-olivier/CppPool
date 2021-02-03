/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Borg_H
#define Borg_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

namespace Federation
{
    namespace Starfleet
    {
        class Ship;
        class Captain;
        class Ensign;
    };
    class Ship;
};
namespace Borg
{
    class Ship;
};

#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Federation.hpp"

namespace Borg
{
    class Ship
    {
    private:
        int _side;
        short _maxWarp;
        WarpSystem::Core *_core;
        Destination _location;
        Destination _home;
        int _shield;
        int _weaponFrequency;
        short _repair;
    public:
        Ship(int weaponFrequency = 20, short repair = 3);
        ~Ship();
        void setupCore(WarpSystem::Core *core);
        void checkCore(void);
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
        int getShield();
        void setShield(int shield);
        int getWeaponFrequency();
        void setWeaponFrequency(int frequency);
        short getRepair();
        void setRepair(short repair);
        void fire(Federation::Starfleet::Ship *target);
        void fire(Federation::Ship *target);
        void repair();
    };
}

#endif