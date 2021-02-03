/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    assign_c(this, str->str);
}

void assign_c(string_t *this, const char *s)
{
    if (s == NULL) {
        if (this->str != NULL)
            free(this->str);
        this->str = NULL;
        return;
    }
    if (this->str != NULL) {
        free(this->str);
        this->str = NULL;
    }
    this->str = (char *)malloc(sizeof(char) * strlen(s) + 1);
    if (!this->str)
        return;
    strcpy(this->str, s);
    return;
}

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    char *tmp = malloc(sizeof(char) * (size(this) + strlen(ap) + 1));
    if (this->str == NULL)
        this->assign_c(this, "");
    strcpy(tmp, this->str);
    strcat(tmp, ap);
    this->assign_c(this, tmp);

    free(tmp);
}