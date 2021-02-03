/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 01
*/

#include <stdarg.h>
#include "new.h"

Object *new(const Class *class, ...)
{
    Class *obj;
    va_list ap;

    va_start(ap, class);
    if ((obj = malloc(class->__size__)) == NULL)
        raise("Out of memory");
    memcpy(obj, class, class->__size__);
    if (obj->__ctor__ != NULL)
        obj->__ctor__(obj, &ap);
    va_end(ap);
    return (obj);
}

Object *va_new(const Class *class, va_list *ap)
{
    Class *obj;

    if ((obj = malloc(class->__size__)) == NULL)
        raise("Out of memory");
    memcpy(obj, class, class->__size__);
    if (obj->__ctor__ != NULL)
        obj->__ctor__(obj, ap);
    return (obj);
}

void delete(Object *ptr)
{
    Class *tmp = NULL;

    if (!ptr)
        raise("Invalid Object");
    tmp = (Class *)ptr;
    if (tmp->__dtor__ != NULL)
        tmp->__dtor__(ptr);
    free(ptr);
    return;
}