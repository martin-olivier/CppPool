
#include <iostream>
#include <stdexcept>
#include "Errors.hpp"
#include "CommunicationDevice.hpp"

CommunicationDevice::CommunicationDevice(std::istream &input,
                                         std::ostream &output)
    try : _api(input, output) {}
        catch (std::exception const &error) {
            throw CommunicationError("Error: " + std::string(error.what()));
    }

CommunicationDevice::~CommunicationDevice()
{
}

void
CommunicationDevice::startMission(std::string const &missionName,
                                  std::string *users,
                                  size_t nbUsers)
{
    try {
        for (size_t i = 0; i < nbUsers; ++i)
            _api.addUser(users[i]);
        _api.startMission(missionName);
    } catch (std::logic_error const &error) {
        throw CommunicationError("LogicError: " + std::string(error.what()));
    } catch (std::runtime_error const &error) {
        throw CommunicationError("RuntimeError: " + std::string(error.what()));
    } catch (std::exception const &error) {
        throw CommunicationError("Error: " + std::string(error.what()));
    }
}

void
CommunicationDevice::send(std::string const &user,
                          std::string const &message) const
{
    try {
        _api.sendMessage(user, message);
    } catch (std::exception const &error) {
        std::cerr << error.what() << std::endl;
    }
}

void
CommunicationDevice::receive(std::string const &user,
                             std::string &message) const
{
    try {
        _api.receiveMessage(user, message);
    } catch (std::exception const &error) {
        std::cerr << error.what() << std::endl;
        message = "INVALID MESSAGE";
    }
}
