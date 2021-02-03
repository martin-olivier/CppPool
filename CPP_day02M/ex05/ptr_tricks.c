/*
** EPITECH PROJECT, 2021
** func_ptr.c
** File description:
** func_ptr
*/

#include "ptr_tricks.h"

#include <stdio.h>
#include <stdlib.h>

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    return (ptr2 - ptr1);
}