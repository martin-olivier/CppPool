/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** vertex
*/

#include <stdio.h>
#include "new.h"
#include "vertex.h"

typedef struct
{
    Class base;
    int x;
    int y;
    int z;
} VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    (void)this;
    return;
}

static char *Vertex_to_string(VertexClass *this)
{
    char *str = NULL;
    int len = 0;

    if (!this)
        raise("Empty Class");
    len = snprintf(NULL, 0, "<%s (%d, %d, %d)>", this->base.__name__, \
    this->x, this->y, this->z);
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        raise("failed malloc");
    snprintf(str, len + 1, "<%s (%d, %d, %d)>", this->base.__name__, \
    this->x, this->y, this->z);
    return str;
}

static Object *Vertex_add(const Object *this, const Object *other)
{
    VertexClass *c1 = (VertexClass *)this;
    VertexClass *c2 = (VertexClass *)other;

    return (new(Vertex, c1->x + c2->x, c1->y + c2->y, c1->z + c2->z));
}

static Object *Vertex_sub(const Object *this, const Object *other)
{
    VertexClass *c1 = (VertexClass *)this;
    VertexClass *c2 = (VertexClass *)other;

    return (new(Vertex, c1->x - c2->x, c1->y - c2->y, c1->z - c2->z));
}

static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_to_string,
        .__add__ = (binary_operator_t)&Vertex_add,
        .__sub__ = (binary_operator_t) &Vertex_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class *Vertex = (const Class *)&_description;
