/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "Toy.hpp"

Toy::Toy() : m_type(BASIC_TOY), m_name("toy"), m_picture()
{
}

Toy::Toy(const Toy &copy) : m_type(copy.m_type), m_name(copy.m_name), m_picture(copy.m_picture)
{
}

Toy::Toy(ToyType type, const std::string &name, const std::string &filename) : m_type(type), m_name(name), m_picture(filename)
{
}

Toy::~Toy()
{
}

Toy::ToyType Toy::getType() const
{
    return m_type;
}

std::string Toy::getName() const
{
    return m_name;
}

void Toy::setName(const std::string &name)
{
    m_name = name;
}

bool Toy::setAscii(const std::string &filename)
{
    if (m_picture.getPictureFromFile(filename) == true)
        return true;
    else {
        m_error.m_where = "setAscii";
        m_error.m_what = "bad new illustration";
        m_error.type = Toy::Error::ErrorType::PICTURE;
    }
    return false;
}

std::string Toy::getAscii() const
{
    return m_picture.data;
}

Toy &Toy::operator=(const Toy &copy)
{
    m_type = copy.m_type;
    m_name = copy.m_name;
    m_picture = copy.m_picture;
    return *this;
}

bool Toy::speak(const std::string &statement)
{
    std::cout << m_name << " \"" << statement << "\"" << std::endl;
    return true;
}

bool Toy::speak_es(const std::string &statement)
{
    (void)(statement);
    m_error.m_where = "speak_es";
    m_error.m_what = "wrong mode";
    m_error.type = Toy::Error::ErrorType::SPEAK;
    return false;
}

Toy& Toy::operator<<(const std::string &filename)
{
    m_picture.data = filename;
    return *this;
}

const Toy::Error &Toy::getLastError() const
{
    return m_error;
}

std::ostream& operator<<(std::ostream &flux, const Toy &a)
{
    flux << a.getName() << std::endl << a.getAscii() << std::endl;
    return flux;
}

// ERROR CLASS

Toy::Error::Error()
{
    m_what = "";
    m_where = "";
    type = UNKNOWN;
}
    
Toy::Error::~Error()
{
}

const std::string &Toy::Error::what() const
{
    return m_what;
}

const std::string &Toy::Error::where() const
{
    return m_where;
}