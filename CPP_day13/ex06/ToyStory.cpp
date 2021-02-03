/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "ToyStory.hpp"

ToyStory::ToyStory()
{
}

ToyStory::~ToyStory()
{
}

void ToyStory::tellMeAStory(const std::string &filename, Toy &toy1, bool (Toy:: *func1)(const std::string &), Toy &toy2, bool (Toy:: *func2)(const std::string &))
{
    std::string line;
    std::ifstream myfile(filename);
    int i = 2;
    if (myfile.is_open()) {
        std::cout << toy1.getAscii() << std::endl;
        std::cout << toy2.getAscii() << std::endl;
        while (!myfile.eof()) {
            getline(myfile, line);
            if (line.find("picture:") == 0) {
                std::string pic = "";
                for (size_t p = 8; p < line.size(); p++)
                    pic.push_back(line.at(p));
                if (i % 2 == 0) {
                    if (toy1.setAscii(pic) == false) {
                        std::cout << toy1.getLastError().m_where << ": " << toy1.getLastError().m_what << std::endl;
                        return;
                    }
                    std::cout << toy1.getAscii() << std::endl;
                    if (!myfile.eof()) {
                        getline(myfile, line);
                        if ((toy1.*func1)(line) == false) {
                            std::cout << toy1.getLastError().m_where << ": " << toy1.getLastError().m_what << std::endl;
                            return;
                        }
                    }
                }
                else {
                    if (toy2.setAscii(pic) == false) {
                        std::cout << toy2.getLastError().m_where << ": " << toy2.getLastError().m_what << std::endl;
                        return;
                    }
                    std::cout << toy2.getAscii() << std::endl;
                    if (!myfile.eof()) {
                        getline(myfile, line);
                        if ((toy2.*func2)(line) == false) {
                            std::cout << toy2.getLastError().m_where << ": " << toy2.getLastError().m_what << std::endl;
                            return;
                        }
                    }
                }
            }
            else {
                if (i % 2 == 0) {
                    if ((toy1.*func1)(line) == false) {
                        std::cout << toy1.getLastError().m_where << ": " << toy1.getLastError().m_what << std::endl;
                        return;
                    }
                }
                else {
                    if ((toy2.*func2)(line) == false) {
                        std::cout << toy2.getLastError().m_where << ": " << toy2.getLastError().m_what << std::endl;
                        return;
                    }
                }
            }
            i++;
        }
        myfile.close();
    }
    else
        std::cout << "Bad Story" << std::endl;
}