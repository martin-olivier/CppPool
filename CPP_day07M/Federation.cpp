/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = maxWarp;
    _home = EARTH;
    _location = _home;
    _shield = 100;
    _photonTorpedo = torpedo;

    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
    if (torpedo != 0)
        std::cout << "Weapons are set: " << _photonTorpedo << " torpedoes ready." << std::endl;
}
        
Federation::Starfleet::Ship::~Ship()
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore(void)
{
    std::cout << "USS " << _name << ": The core is ";
    if (_core->checkReactor()->isStable() == true)
        std::cout << "stable";
    else
        std::cout << "unstable";

    std::cout << " at the time." << std::endl;
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    _captain = captain;
    std::cout << _captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (!(warp <= _maxWarp))
        return false;
    if (d == _location)
        return false;
    if (!this->_core->checkReactor()->isStable() == true)
        return false;
    _location = d;
    return true;
}

bool Federation::Starfleet::Ship::move(int warp)
{
    if (!(warp <= _maxWarp))
        return false;
    if (!this->_core->checkReactor()->isStable() == true)
        return false;
    _location = _home;
    return true;
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    if (d == _location)
        return false;
    if (!this->_core->checkReactor()->isStable() == true)
        return false;
    _location = d;
    return true;
}

bool Federation::Starfleet::Ship::move()
{
    if (!this->_core->checkReactor()->isStable() == true)
        return false;
    _location = _home;
    return true;
}

int Federation::Starfleet::Ship::getShield(void)
{
    return _shield;
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    _shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return _photonTorpedo;
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    _photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    fire(1, target);
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
    if (_photonTorpedo - torpedoes > 0) {
        _photonTorpedo -= torpedoes;
        std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
        target->setShield(target->getShield() - (50 * torpedoes));
    }
    else if (_photonTorpedo - torpedoes == 0) {
        _photonTorpedo -= torpedoes;
        std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
        std::cout << _name << ": No more torpedo to fire, " << _captain << std::endl;
        target->setShield(target->getShield() - (50 * torpedoes));
    }
    else {
        std::cout << _name << ": No enough torpedoes to fire, " << _captain << std::endl;
    }
}

/// SHIP INDEPENDANT

Federation::Ship::Ship(int length, int width, std::string name)
{
    _length = length;
    _width = width;
    _name = name;
    _home = VULCAN;
    _location = _home;

    std::cout << "The independent ship " << _name << " just finished its construction." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{

}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore(void)
{
    std::cout << _name << ": The core is ";
    if (_core->checkReactor()->isStable() == true)
        std::cout << "stable";
    else
        std::cout << "unstable";

    std::cout << " at the time." << std::endl;
}

bool Federation::Ship::move(int warp, Destination d)
{
    (void)warp;
    if (d == _location)
        return false;
    if (!this->_core->checkReactor()->isStable() == true)
        return false;
    _location = d;
    return true;
}

bool Federation::Ship::move(int warp)
{
    (void)warp;
    if (!this->_core->checkReactor()->isStable() == true)
        return false;
    _location = _home;
    return true;
}

bool Federation::Ship::move(Destination d)
{
    if (d == _location)
        return false;
    if (!(this->_core->checkReactor()->isStable() == true))
        return false;
    _location = d;
    return true;
}

bool Federation::Ship::move()
{
    if (!(this->_core->checkReactor()->isStable() == true))
        return false;
    _location = _home;
    return true;
}

WarpSystem::Core *Federation::Ship::getCore(void)
{
    return _core;
}

// CAPTAIN

Federation::Starfleet::Captain::Captain(std::string name)
{
    _name = name;
}
        
Federation::Starfleet::Captain::~Captain()
{
}

std::string Federation::Starfleet::Captain::getName()
{
    return _name;
}

int Federation::Starfleet::Captain::getAge()
{
    return _age;
}

void Federation::Starfleet::Captain::setAge(int age)
{
    _age = age;
}

// ENSIGN

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    _name = name;
    std::cout << "Ensign " << _name << ", awaiting orders." << std::endl;
}
        
Federation::Starfleet::Ensign::~Ensign()
{
}