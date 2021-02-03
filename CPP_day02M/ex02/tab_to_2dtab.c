/*
** EPITECH PROJECT, 2021
** tab_to_2dtab.c
** File description:
** tab_to_2dtab
*/

#include <string.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int pos = 0;

    res[0] = malloc(sizeof(int *) * length);
    for (int i = 0; i < length; i++)
        res[0][i] = malloc(sizeof(int) * width);
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            res[0][i][j] = tab[pos];
            pos++;
        }
    }
}