/*
** EPITECH PROJECT, 2021
** double_list.c
** File description:
** double_list
*/

#include "generic_list.h"

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    list_t save;

    if (position > list_get_size(list))
        return NULL;

    if (position == 0) {
        return list->value;
    }
    save = list;
    for (unsigned int i = 0; i < position; i++)
        save = save->next;

    return save->value;
}

void *list_get_elem_at_front(list_t list)
{
    return (list_get_elem_at_position(list, 0));
}

void *list_get_elem_at_back(list_t list)
{
    return (list_get_elem_at_position(list, list_get_size(list) - 1));
}

node_t *list_get_first_node_with_value(list_t list, void *value,
value_comparator_t val_comp)
{
    while (val_comp(value, list->value) == 0) {
        if (list->next == NULL)
            return NULL;
    }
    return list;
}

void list_clear(list_t *front)
{
    if (!(front))
        return;
    while (list_get_size(*front) != 0)
        list_del_elem_at_front(front);
}