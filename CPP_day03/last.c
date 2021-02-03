/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

void str_push_back(string_t *this, char cara);

void print(const string_t *this)
{
    if (this->str != NULL)
        printf("%s", this->str);
}

void join_c(string_t *this, char delim, const char * const * tab)
{
    if (!this || !tab)
        return;
    this->assign_c(this, "");
    for (int i = 0; tab[i] != NULL; i++) {
        this->append_c(this, tab[i]);
        if (tab[i + 1] != NULL)
            str_push_back(this, delim);
    }
}

void join_s(string_t *this, char delim, const string_t * const * tab)
{
    if (!this || !tab)
        return;
    this->assign_c(this, "");
    for (int i = 0; tab[i] != NULL; i++) {
        this->append_s(this, tab[i]);
        if (tab[i + 1] != NULL)
            str_push_back(this, delim);
    }
}

string_t *substr_ext(const string_t *this)
{
    string_t *tmp = malloc(sizeof(string_t));

    string_init(tmp, "");
    if (tmp->str != NULL)
        free(tmp->str);
    tmp->str = malloc(sizeof(char) * (strlen(this->str) + 2));
    return tmp;
}

string_t *substr(const string_t *this, int offset, int length)
{
    if (!this || !this->str)
        return NULL;
    string_t *tmp = substr_ext(this);
    int endpos;
    int pos = 0;
    if (offset < 0) {
        pos = (this->size(this));
        pos -= (-offset);
    } else
        pos += offset;
    if (pos < 0)
        pos = 0;
    if (pos > strlen(this->str))
        pos = strlen(this->str);
    if (length > 0)
        endpos = tmp->copy(this, tmp->str, length, pos);
    else
        endpos = tmp->copy(this, tmp->str, -length, pos + length);
    tmp->str[endpos] = '\0';
    return tmp;
}