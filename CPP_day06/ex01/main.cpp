/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>

float get_celsius(float temperature)
{
    return (5.0 / 9.0 * (temperature - 32.0));
}

float get_fahrenheit(float temperature)
{
    return ((temperature * 9.0 / 5.0) + 32);
}

int main(void)
{
    std::string temp;
    std::string scale;
    float temperature;

    std::cin >> temp;
    std::cin >> scale;

    temperature = std::stof(temp);

    if (scale == "Fahrenheit") {
        temperature = get_celsius(temperature);
        std::cout << std::setw (16) << std::fixed << std::setprecision(3) << temperature << std::setw (16) << "Celsius" << std::endl;
    }
    else if (scale == "Celsius") {
        temperature = get_fahrenheit(temperature);
        std::cout << std::setw (16) << std::fixed << std::setprecision(3) << temperature << std::setw (16) << "Fahrenheit" << std::endl;
    }
    else
        return 84;

    return EXIT_SUCCESS;
}