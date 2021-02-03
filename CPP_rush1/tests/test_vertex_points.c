/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** test_ex03
*/

#include "new.h"
#include "point.h"
#include "vertex.h"
#include <criterion/criterion.h>

////////////////////////TEST VERTEX////////////////////////

Test(Vertex, test_add)
{
    Object *f1 = new(Vertex, 6, 4, 2);
    Object *f2 = new(Vertex, 2, 4, 6);
    cr_assert_str_eq(str(addition(f1, f2)), "<Vertex (8, 8, 8)>");
}

Test(Vertex, test_sub)
{
    Object *f1 = new(Vertex, 6, 7, 8);
    Object *f2 = new(Vertex, 1, 2, 3);
    cr_assert_str_eq(str(subtraction(f1, f2)), "<Vertex (5, 5, 5)>");
}

////////////////////////TEST POINTS////////////////////////

Test(Point, test_add)
{
    Object *f1 = new(Point, 6, 4);
    Object *f2 = new(Point, 2, 4);
    cr_assert_str_eq(str(addition(f1, f2)), "<Point (8, 8)>");
}

Test(Point, test_sub)
{
    Object *f1 = new(Point, 6, 7);
    Object *f2 = new(Point, 1, 2);
    cr_assert_str_eq(str(subtraction(f1, f2)), "<Point (5, 5)>");
}
