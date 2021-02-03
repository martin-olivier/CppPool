/*
** EPITECH PROJECT, 2021
** func_ptr.c
** File description:
** func_ptr
*/

#ifndef BOOST_VECTOR_H
#define BOOST_VECTOR_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "func_ptr_enum.h"

typedef struct fn_array
{
    action_t action;
    void (*fn)(const char*);
} t_fn_array;

void print_normal(const char *str);
void print_reverse(const char *str);
void print_upper(const char *str);
void print_42(const char *str);
void do_action(action_t action , const char *str);

#endif