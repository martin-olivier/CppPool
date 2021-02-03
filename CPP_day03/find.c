/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

bool check_find(const char *data, const char *str, int i)
{
    for (int j = 0; j < strlen(str); j++, i++) {
        if (data[i] != str[j])
            return false;
    }
    return true;
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    if (strlen(str) > strlen(this->str))
        return -1;
    if (pos > strlen(this->str))
        return -1;
    for (int i = pos; i < (strlen(this->str) - strlen(str) + 1); i++) {
        if (this->str[i] == str[0]) {
            if (check_find(this->str, str, i) == true)
                return i;
        }
    }
    return -1;
}

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return (find_c(this, str->str, pos));
}