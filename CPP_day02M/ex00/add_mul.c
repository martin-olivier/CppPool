/*
** EPITECH PROJECT, 2021
** add_mul.c
** File description:
** add_mul
*/

void add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void add_mul_2param(int *first, int *second)
{
    int save_first = *first;
    int save_second = *second;

    *first = save_first + save_second;
    *second = save_first * save_second;
}