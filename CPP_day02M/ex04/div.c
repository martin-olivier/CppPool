/*
** EPITECH PROJECT, 2021
** func_ptr.c
** File description:
** func_ptr
*/

#include "castmania.h"

int integer_div(int a, int b)
{
    if (b == 0)
        return 0;

    return a / b;
}

float decimale_div(int a, int b)
{
    if (b == 0)
        return 0;

    return (float)a / b;
}

void exec_div(division_t *operation)
{
    if (operation->div_type == INTEGER) {
        integer_op_t *data = (integer_op_t*)operation->div_op;
        data->res = integer_div(data->a, data->b);
    }
    if (operation->div_type == DECIMALE) {
        decimale_op_t *data = (decimale_op_t*)operation->div_op;
        data->res = decimale_div(data->a, data->b);
    }
}