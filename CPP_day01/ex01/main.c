/*
** EPITECH PROJECT, 2021
** z.c
** File description:
** Z IS FOR ZORGLUB
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void menger(int original_size, int levels_nb);

int main(int ac, char **av)
{
    if (ac != 3)
        return 84;
    int original_size = atoi(av[1]);
    int levels_nb = atoi(av[2]);
    menger(original_size, levels_nb);
}