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

unsigned int double_list_get_size(double_list_t list)
{
    if (list == NULL)
        return 0;
    double_list_t tmp = list;
    int i = 1;
    for (; tmp->next != NULL; i++) {
        tmp = tmp->next;
    }
    return i;
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return true;
    return false;
}

void double_list_dump(double_list_t list)
{
    if (list == NULL)
        return;
    double_list_t tmp = list;
    while (tmp->next != NULL) {
        printf("%f\n", tmp->value);
        tmp = tmp->next;
    }
    printf("%f\n", tmp->value);
}

bool double_list_add_pos_ext(double_list_t *front_ptr,
double elem, unsigned int position)
{
    double_list_t newlist = malloc(sizeof(struct doublelist_node));
    double_list_t tmp_list = front_ptr[0];
    double_list_t next_list;

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

bool double_list_add_elem_at_position(double_list_t *front_ptr,
double elem, unsigned int position)
{
    if (position == 0) {
        double_list_t newlist = malloc(sizeof(struct doublelist_node));
        if (newlist == NULL)
            return false;
        newlist->next = front_ptr[0];
        newlist->value = elem;
        front_ptr[0] = newlist;
        return true;
    }
    if (position > double_list_get_size(front_ptr[0]))
        return false;
    return (double_list_add_pos_ext(front_ptr, elem, position));
}