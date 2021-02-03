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

bool list_add_elem_at_front(list_t *front_ptr , void *elem)
{
    return (list_add_elem_at_position(front_ptr, elem, 0));
}

bool list_add_elem_at_back(list_t *front_ptr , void *elem)
{
    return (list_add_elem_at_position(front_ptr, elem,
    list_get_size(front_ptr[0])));
}

bool list_del_elem_at_position(list_t *front_ptr , unsigned int position)
{
    if (position >= list_get_size(front_ptr[0]))
        return false;
    list_t save;
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

bool list_del_elem_at_front(list_t *front_ptr)
{
    return (list_del_elem_at_position(front_ptr, 0));
}

bool list_del_elem_at_back(list_t *front_ptr)
{
    return (list_del_elem_at_position(front_ptr,
    list_get_size(*front_ptr) - 1));
}