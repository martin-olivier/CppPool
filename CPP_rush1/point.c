/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "point.h"

typedef struct
{
    Class base;
    int x;
    int y;
} PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    (void)this;
    return;
}

static char *Point_to_string(PointClass *this)
{
    char *buf;
    int len = 0;

    if (!this)
        raise("Empty Class");
    len = snprintf(NULL, 0, "<%s (%d, %d)>", this->base.__name__, this->x,
        this->y);
    buf = malloc(sizeof(char) * (len + 1));
    if (!buf)
        raise("failed malloc");
    snprintf(buf, len + 1, "<%s (%d, %d)>", this->base.__name__, this->x,
        this->y);
    return (buf);
}

static Object *Point_add(const Object *this, const Object *other)
{
    PointClass *c1 = (PointClass *)this;
    PointClass *c2 = (PointClass *)other;

    return (new(Point, c1->x + c2->x, c1->y + c2->y));
}

static Object *Point_sub(const Object *this, const Object *other)
{
    PointClass *c1 = (PointClass *)this;
    PointClass *c2 = (PointClass *)other;

    return (new(Point, c1->x - c2->x, c1->y - c2->y));
}

static const PointClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_to_string,
        .__add__ = (binary_operator_t)&Point_add,    /* Implement this method for exercice 03 */
        .__sub__ = (binary_operator_t)&Point_sub,    /* Implement this method for exercice 03 */
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class *Point = (const Class *)&_description;