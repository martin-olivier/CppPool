/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (this->str == NULL)
        return -1;
    if (pos > strlen(this->str))
        return -1;
    return (this->str[pos]);
}

void clear(string_t *this)
{
    int taille = this->size(this);

    if (this->str == NULL)
        return;
    for (int i = 0; i < taille; i++)
        this->str[i] = '\0';
}

int size(const string_t *this)
{
    if (this->str == NULL)
        return -1;
    return (strlen(this->str));
}

int compare_s(const string_t *this, const string_t *str)
{
    return strcmp(this->str, str->str);
}

int compare_c(const string_t *this, const char *str)
{
    return strcmp(this->str, str);
}