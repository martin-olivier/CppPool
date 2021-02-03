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

bool double_list_add_elem_at_front(double_list_t *front_ptr , double elem)
{
    return (double_list_add_elem_at_position(front_ptr, elem, 0));
}

bool double_list_add_elem_at_back(double_list_t *front_ptr , double elem)
{
    return (double_list_add_elem_at_position(front_ptr, elem,
    double_list_get_size(*front_ptr)));
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
unsigned int position)
{
    if (position >= double_list_get_size(front_ptr[0]))
        return false;
    double_list_t save;
    if (position == 0) {
        save = front_ptr[0]->next;
        free(front_ptr[0]);
        front_ptr[0] = save;
        return true;
    }
    save = front_ptr[0];
    for (unsigned int i = 0; i < position - 1; i++)
        save = save->next;
    save->next = save->next->next;
    return true;
}

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    return (double_list_del_elem_at_position(front_ptr, 0));
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    return (double_list_del_elem_at_position(front_ptr,
    double_list_get_size(*front_ptr) - 1));
}