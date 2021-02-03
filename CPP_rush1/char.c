/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "char.h"

typedef struct
{
    Class base;
    char c;
} CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    this->c = va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    (void)this;
    return;
}

static char *Char_to_string(CharClass *this)
{
    char *buf;
    int len = 0;

    if (!this)
        raise("Empty Class");
    len = snprintf(NULL, 0, "<%s (%c)>", this->base.__name__, this->c);
    buf = malloc(sizeof(char) * (len + 1));
    if (!buf)
        raise("failed malloc");
    snprintf(buf, len + 1, "<%s (%c)>", this->base.__name__, this->c);
    return (buf);
}

static Object *Char_add(const Object *this, const Object *other)
{
    CharClass *c1 = (CharClass *)this;
    CharClass *c2 = (CharClass *)other;

    return (new(Char, c1->c + c2->c));
}

static Object *Char_sub(const Object *this, const Object *other)
{
    CharClass *c1 = (CharClass *)this;
    CharClass *c2 = (CharClass *)other;

    return (new(Char, c1->c - c2->c));
}

static Object *Char_mul(const Object *this, const Object *other)
{
    CharClass *c1 = (CharClass *)this;
    CharClass *c2 = (CharClass *)other;

    return (new(Char, c1->c * c2->c));
}

static Object *Char_div(const Object *this, const Object *other)
{
    CharClass *c1 = (CharClass *)this;
    CharClass *c2 = (CharClass *)other;

    if (c2->c == 0)
        raise("Can't divide with 0");
    return (new(Char, c1->c / c2->c));
}

static bool Char_eq(const Object *this, const Object *other)
{
    CharClass *c1 = (CharClass *)this;
    CharClass *c2 = (CharClass *)other;

    return (c1->c == c2->c);
}

static bool Char_lt(const Object *this, const Object *other)
{
    CharClass *c1 = (CharClass *)this;
    CharClass *c2 = (CharClass *)other;

    return (c1->c < c2->c);
}

static bool Char_gt(const Object *this, const Object *other)
{
    CharClass *c1 = (CharClass *)this;
    CharClass *c2 = (CharClass *)other;

    return (c1->c > c2->c);
}

static const CharClass _description = {
    {
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&Char_ctor,
        .__dtor__ = (dtor_t)&Char_dtor,
        .__str__ = (to_string_t)&Char_to_string,
        .__add__ = (binary_operator_t)&Char_add,
        .__sub__ = (binary_operator_t)&Char_sub,
        .__mul__ = (binary_operator_t)&Char_mul,
        .__div__ = (binary_operator_t)&Char_div,
        .__eq__ = (binary_comparator_t)&Char_eq,
        .__gt__ = (binary_comparator_t)&Char_gt,
        .__lt__ = (binary_comparator_t)&Char_lt
    },
    .c = '\0'
};

const Class *Char = (const Class *)&_description;
