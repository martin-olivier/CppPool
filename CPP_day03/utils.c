/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

int to_int(const string_t *this)
{
    return (atoi(this->str));
}

void str_push_back(string_t *this, char cara)
{
    char tmp[2];
    tmp[0] = cara;
    tmp[1] = '\0';

    this->append_c(this, tmp);
}

char **split_c_ext(const string_t *this, char separator, string_t *tmp, int len)
{
    char **tab = malloc(sizeof(char *) * (len + 2));
    int j = 0;

    for (int i = 0; i < this->size(this); i++) {
        if (this->at(this, i) == separator) {
            tab[j] = malloc(sizeof(char) * tmp->size(tmp) + 1);
            strcpy(tab[j], tmp->str);
            j++;
            tmp->assign_c(tmp, "");
        }
        else
            str_push_back(tmp, this->at(this, i));
    }
    tab[j] = strdup(tmp->str);
    j++;
    tab[j] = NULL;
    string_destroy(tmp);
    return tab;
}

char **split_c(const string_t *this, char separator)
{
    int len = 0;

    string_t tmp;
    string_init(&tmp, "");
    tmp.assign_c(&tmp, "");

    for (int i = 0; i < this->size(this); i++) {
        if (this->at(this, i) == separator)
            len++;
    }
    return split_c_ext(this, separator, &tmp, len);
}

string_t **split_s(const string_t *this, char separator)
{
    char **data = split_c(this, separator);
    int len = 0;
    int i = 0;

    for (int j = 0; j < this->size(this); j++) {
        if (this->at(this, j) == separator)
            len++;
    }
    string_t **tmp = malloc(sizeof(string_t *) * (len + 2));
    for (; data[i] != NULL; i++) {
        tmp[i] = malloc(sizeof(string_t));
        string_init(tmp[i], data[i]);
    }
    tmp[i] = NULL;
    for (i = 0; data[i] != NULL; i++) {
        free(data[i]);
    }
    free(data);
    return tmp;
}