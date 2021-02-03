/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

void insert_c_ext(string_t *this, size_t pos, const char *str)
{
    char *tmp = malloc(sizeof(char) * (this->size(this) + strlen(str) + 1));
    int i = 0;
    for (; i < pos; i++)
        tmp[i] = this->at(this, i);
    tmp[i] = '\0';
    if (i == 0)
        strcpy(tmp, str);
    else
        strcat(tmp, str);
    int j = i + strlen(str);
    for (; i < this->size(this); i++, j++)
        tmp[j] = this->at(this, i);
    tmp[j] = '\0';
    if (this->str != NULL)
        free(this->str);
    this->str = tmp;
}

void insert_c(string_t *this, size_t pos, const char *str)
{
    if (str == NULL)
        return;
    if (pos >= this->size(this)) {
        this->append_c(this, str);
        return;
    }
    insert_c_ext(this, pos, str);
}

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    insert_c(this, pos, str->str);
}