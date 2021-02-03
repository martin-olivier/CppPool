/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** ex02
*/

#include <stdio.h>
#include "new.h"
#include "point.h"
#include "vertex.h"

int main(void)
{
    Object  *point = new(Point, 42, -42);
    Object  *vertex = new(Vertex, 0, 1, 2);

    printf("point = %s\n", str(point));
    printf("vertex = %s\n", str(vertex));

    delete(point);
    delete(vertex);
    return (0);
}