/*
** EPITECH PROJECT, 2021
** func_ptr.c
** File description:
** func_ptr
*/

#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    for (int i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 123)
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void print_42(const char *str)
{
    printf("42\n");
}

void do_action(action_t action , const char *str)
{
    t_fn_array array[4];
    array[0].action = PRINT_NORMAL;
    array[0].fn = &print_normal;
    array[1].action = PRINT_REVERSE;
    array[1].fn = &print_reverse;
    array[2].action = PRINT_UPPER;
    array[2].fn = &print_upper;
    array[3].action = PRINT_42;
    array[3].fn = &print_42;

    for (int i = 0; i < 4; i++) {
        if (action == array[i].action)
            array[i].fn(str);
    }
}