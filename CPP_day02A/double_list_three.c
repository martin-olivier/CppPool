/*
** EPITECH PROJECT, 2021
** double_list.c
** File description:
** double_list
*/

#include "double_list.h"

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

double double_list_get_elem_at_position(double_list_t list,
unsigned int position)
{
    double_list_t save;

    if (position > double_list_get_size(list))
        return 0;
    if (position == 0)
        return list->value;
    save = list;
    for (unsigned int i = 0; i < position; i++)
        save = save->next;
    return save->value;
}

double double_list_get_elem_at_front(double_list_t list)
{
    return (double_list_get_elem_at_position(list, 0));
}

double double_list_get_elem_at_back(double_list_t list)
{
    return (double_list_get_elem_at_position(list,
    double_list_get_size(list) - 1));
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value)
{
    doublelist_node_t *save = list;

    while (save != NULL) {
        if (save->value == value)
            return save;
        save = save->next;
    }
    return NULL;
}