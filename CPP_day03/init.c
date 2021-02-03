/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** string class functions
*/

#include "string.h"

void string_init_ext(string_t *this)
{
    this->find_c = &find_c;
    this->find_s = &find_s;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
    this->split_c = &split_c;
    this->split_s = &split_s;
    this->print = &print;
    this->join_c = &join_c;
    this->join_s = &join_s;
    this->substr = &substr;
}

void string_init(string_t *this, const char *s)
{
    this->str = NULL;
    assign_c(this, s);

    this->assign_c = &assign_c;
    this->assign_s = &assign_s;
    this->append_c = &append_c;
    this->append_s = &append_s;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_s = &compare_s;
    this->compare_c = &compare_c;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    string_init_ext(this);
}

void string_destroy(string_t *this)
{
    if (this->str != NULL)
        free(this->str);
    this->str = NULL;
}