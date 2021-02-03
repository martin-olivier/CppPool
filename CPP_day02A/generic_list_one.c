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

unsigned int list_get_size(list_t list)
{
    if (list == NULL)
        return 0;
    list_t tmp = list;
    int i = 1;
    for (; tmp->next != NULL; i++) {
        tmp = tmp->next;
    }
    return i;
}

bool list_is_empty(list_t list)
{
    if (list == NULL)
        return true;
    return false;
}

void list_dump(list_t list, value_displayer_t val_disp)
{
    if (list == NULL)
        return;
    list_t tmp = list;
    while (tmp->next != NULL) {
        val_disp(tmp->value);
        tmp = tmp->next;
    }
    val_disp(tmp->value);
}

bool list_add_pos_ext(list_t *front_ptr, void *elem, unsigned int position)
{
    list_t newlist = malloc(sizeof(struct node));
    list_t tmp_list = front_ptr[0];
    list_t next_list;

    if (newlist == NULL)
        return false;

    for (unsigned int i = 0; i < position - 1; i++)
        tmp_list = tmp_list->next;

    next_list = tmp_list->next;
    tmp_list->next = newlist;
    newlist->next = next_list;
    newlist->value = elem;
    return true;
}

bool list_add_elem_at_position(list_t *front_ptr, void *elem,
unsigned int position)
{
    if (position == 0) {
        list_t newlist = malloc(sizeof(struct node));
        if (newlist == NULL)
            return false;
        newlist->next = front_ptr[0];
        newlist->value = elem;
        front_ptr[0] = newlist;
        return true;
    }
    if (position > list_get_size(front_ptr[0]))
        return false;
    return list_add_pos_ext(front_ptr, elem, position);
}