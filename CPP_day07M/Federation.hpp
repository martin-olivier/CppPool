/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Federation_H
#define Federation_H

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
#include "Borg.hpp"

namespace Federation
{
    namespace Starfleet
    {
        class Captain
        {
        private:
            std::string _name;
            int _age;
        public:
            Captain(std::string name);
            ~Captain();
            std::string getName();
            int getAge();
            void setAge(int age);
        };

        class Ship
        {
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *_core;
            Federation::Starfleet::Captain *_captain;
            Destination _location;
            Destination _home;
            int _shield;
            int _photonTorpedo;
        public:
            Ship(int length = 289, int width = 132, std::string name = "Entreprise", short maxWarp = 6, int torpedo = 0);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            void promote(Federation::Starfleet::Captain *captain);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield(void);
            void setShield(int shield);
            int getTorpedo(void);
            void setTorpedo(int torpedo);
            void fire(Borg::Ship *target);
            void fire(int torpedoes, Borg::Ship *target);
        };

        class Ensign
        {
        private:
            std::string _name;
        public:
            Ensign(std::string name);
            ~Ensign();
        };
        
    }
    class Ship
        {
        private:
            int _length;
            int _width;
            std::string _name;
            WarpSystem::Core *_core;
            Destination _location;
            Destination _home;
        public:
            Ship(int length, int width, std::string name);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            WarpSystem::Core *getCore();
        };
}

#endif