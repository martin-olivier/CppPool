
#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>
#include <exception>

class NasaError : public std::exception
{
    public:
        NasaError(std::string const &message, std::string const &component = "Unknown");
        ~NasaError(){};
        virtual const std::string &getComponent() const;
        char const *what() const noexcept;
    private:
        std::string _message;
        std::string _component;
};

class MissionCriticalError : public NasaError
{
    public:
        MissionCriticalError(std::string const &message, std::string const &component = "Unknown");
};

class LifeCriticalError : public NasaError
{
    public:
        LifeCriticalError(std::string const &message, std::string const &component = "Unknown");
};

class UserError : public NasaError
{
    public:
        UserError(std::string const &message, std::string const &component = "Unknown");
};

class CommunicationError : public NasaError
{
    public:
        CommunicationError(std::string const &message);
};

#endif
