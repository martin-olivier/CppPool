/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef Toy_H
#define Toy_H

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>

#include "Picture.hpp"

class Toy
{
public:
    class Error
    {
    private:
    public:
        enum ErrorType {UNKNOWN, PICTURE, SPEAK};
        Error();
        ~Error();
        const std::string &what() const;
        const std::string &where() const;
        ErrorType type;
        std::string m_what;
        std::string m_where;
    };
    enum ToyType {BASIC_TOY, ALIEN, BUZZ, WOODY};
    Toy();
    Toy(const Toy &copy);
    Toy(ToyType type, const std::string &name, const std::string &filename);
    ~Toy();
    ToyType getType() const;
    std::string getName() const;
    void setName(const std::string &name);
    bool setAscii(const std::string &filename);
    std::string getAscii() const;
    Toy &operator=(const Toy &copy);
    virtual void speak(const std::string &statement);
    virtual bool speak_es(const std::string &statement);
    const Toy::Error &getLastError() const;
    Toy& operator<<(const std::string &filename);
protected:
    ToyType m_type;
    std::string m_name;
    Picture m_picture;
    Toy::Error m_error;
};

std::ostream& operator<<(std::ostream &flux, const Toy &a);

#endif