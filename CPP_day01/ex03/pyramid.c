/*
** EPITECH PROJECT, 2021
** z.c
** File description:
** Z IS FOR ZORGLUB
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool pyramid_complete(int size, int *last_path)
{
    for (int i = 1; i < size - 1; i++) {
        if (last_path[i] == 0)
            return false;
    }
    return true;
}

int get_total(int size, int **map, int *last_path)
{
    int tot = 0;
    int j = 0;

    for (int i = 0; i < size; i++) {
        j += last_path[i];
        tot += map[i][j];
    }
    return tot;
}

void get_path(int size, int nb, int *last_path)
{
    for (int i = 0; i < size; i++) {
        last_path[i] = nb % 2 == 1;
        nb /= 2;
    }
    int i;
    int j = size - 1;
    char temp;

    for (i = 0; i < size/2; i++)
    {
        temp = last_path[i];
        last_path[i] = last_path[j];
        last_path[j] = temp;
        j--;
    }
}

int pyramid_loop(int size, int **map, int *last_path)
{
    int nb = 0;
    get_path(size, nb, last_path);
    int lower = get_total(size, map, last_path);
    while (pyramid_complete(size, last_path) == false) {
        nb++;
        get_path(size, nb, last_path);
        if (get_total(size, map, last_path) < lower)
            lower = get_total(size, map, last_path);
    }
    return lower;
}

int	pyramid_path(int size, int **map)
{
    int *last_path = malloc(sizeof(int) * size);
    return (pyramid_loop(size, map, last_path));
}