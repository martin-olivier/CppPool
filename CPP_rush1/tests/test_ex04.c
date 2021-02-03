/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** test_ex03
*/

#include "new.h"
#include "point.h"
#include "vertex.h"
#include "int.h"
#include "char.h"
#include "float.h"
#include <criterion/criterion.h>

////////////////////////TEST INT////////////////////////
Test(Int, test_mul)
{
    Object *f1 = new(Int, 6);
    Object *f2 = new(Int, 2);
    cr_assert_str_eq(str(multiplication(f1, f2)), "<Int (12)>");
}

Test(Int, test_div)
{
    Object *f1 = new(Int, 6);
    Object *f2 = new(Int, 2);
    cr_assert_str_eq(str(division(f1, f2)), "<Int (3)>");
}

Test(Int, test_add)
{
    Object *f1 = new(Int, 6);
    Object *f2 = new(Int, 2);
    cr_assert_str_eq(str(addition(f1, f2)), "<Int (8)>");
}

Test(Int, test_sub)
{
    Object *f1 = new(Int, 6);
    Object *f2 = new(Int, 2);
    cr_assert_str_eq(str(subtraction(f1, f2)), "<Int (4)>");
}

Test(Int, test_eq)
{
    Object *f1 = new(Int, 6);
    Object *f2 = new(Int, 6);
    cr_assert_eq(eq(f1, f2), true);
}

Test(Int, test_lt)
{
    Object *f1 = new(Int, 6);
    Object *f2 = new(Int, 2);
    cr_assert_eq(lt(f1, f2), false);
}

Test(Int, test_gt)
{
    Object *f1 = new(Int, 6);
    Object *f2 = new(Int, 2);
    cr_assert_eq(gt(f1, f2), true);
}

//////////////////////////TEST FLOAT////////////////////
Test(Float, test_mul)
{
    Object *f1 = new(Float, 6.0);
    Object *f2 = new(Float, 2.0);
    cr_assert_str_eq(str(multiplication(f1, f2)), "<Float (12.000000)>");
}

Test(Float, test_div)
{
    Object *f1 = new(Float, 6.0);
    Object *f2 = new(Float, 2.0);
    cr_assert_str_eq(str(division(f1, f2)), "<Float (3.000000)>");
}

Test(Float, test_add)
{
    Object *f1 = new(Float, 6.0);
    Object *f2 = new(Float, 2.0);
    cr_assert_str_eq(str(addition(f1, f2)), "<Float (8.000000)>");
}

Test(Float, test_sub)
{
    Object *f1 = new(Float, 6.0);
    Object *f2 = new(Float, 2.0);
    cr_assert_str_eq(str(subtraction(f1, f2)), "<Float (4.000000)>");
}

Test(Float, test_eq)
{
    Object *f1 = new(Float, 6.0);
    Object *f2 = new(Float, 6.0);
    cr_assert_eq(eq(f1, f2), true);
}

Test(Float, test_lt)
{
    Object *f1 = new(Float, 6.0);
    Object *f2 = new(Float, 2.0);
    cr_assert_eq(lt(f1, f2), false);
}

Test(Float, test_gt)
{
    Object *f1 = new(Float, 6.0);
    Object *f2 = new(Float, 2.0);
    cr_assert_eq(gt(f1, f2), true);
}

////////////////////////TEST CHAR////////////////////////
Test(Char, test_mul)
{
    Object *f1 = new(Char, '&');
    Object *f2 = new(Char, 7);
    cr_assert_str_eq(str(multiplication(f1, f2)), "<Char (\n)>");
}

Test(Char, test_div)
{
    Object *f1 = new(Char, '&');
    Object *f2 = new(Char, 'j');
    cr_assert_str_eq(str(division(f1, f2)), "<Char (");
}

Test(Char, test_add)
{
    Object *f1 = new(Char, '&');
    Object *f2 = new(Char, 7);
    cr_assert_str_eq(str(addition(f1, f2)), "<Char (-)>");
}

Test(Char, test_sub)
{
    Object *f1 = new(Char, 'z');
    Object *f2 = new(Char, '&');
    cr_assert_str_eq(str(subtraction(f1, f2)), "<Char (T)>");
}

Test(Char, test_eq)
{
    Object *f1 = new(Char, 'c');
    Object *f2 = new(Char, 'c');
    cr_assert_eq(eq(f1, f2), true);
}

Test(Char, test_lt)
{
    Object *f1 = new(Char, '&');
    Object *f2 = new(Char, 7);
    cr_assert_eq(lt(f1, f2), false);
}

Test(Char, test_gt)
{
    Object *f1 = new(Char, 'k');
    Object *f2 = new(Char, 'c');
    cr_assert_eq(gt(f1, f2), true);
}
