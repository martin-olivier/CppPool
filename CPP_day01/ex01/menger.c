/*
** EPITECH PROJECT, 2021
** z.c
** File description:
** Z IS FOR ZORGLUB
*/

#include "menger.h"
#include <stdbool.h>

bool square_is_empty(struct cube_t array)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            if (array.t_case[i][j] == 1)
                return false;
    }
    return true;
}

void step(struct cube_t *array, int size)
{

}

struct cube_t init_cube(void)
{
    struct cube_t tmp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            tmp.t_case[i][j] = 1;
    }
    return tmp;
}

void menger(int original_size, int levels_nb)
{
    struct cube_t array[original_size / 3][original_size / 3];

    for (int i = 0; i < original_size; i++) {
        for (int j = 0; j < original_size; j++) {
            array[i][j] = init_cube();
        }
    }
    for (int i = 0; i < levels_nb; i++)
        step(&array, original_size);
}