/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    int i = 0;
    int j = pos;

    if (this->str == NULL)
        return 0;
    if (s == NULL)
        return 0;
    if (pos > strlen(this->str))
        return 0;
    for (; i < n && i < (strlen(this->str) + 1) - pos; i++, j++)
        s[i] = this->str[j];
    return i;
}

const char *c_str(const string_t *this)
{
    return this->str;
}

int empty(const string_t *this)
{
    if (this->str == NULL)
        return 1;
    if (strlen(this->str) == 0)
        return 1;
    return 0;
}