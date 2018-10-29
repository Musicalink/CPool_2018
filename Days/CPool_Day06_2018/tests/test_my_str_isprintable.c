/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_str_isprintable, str_is_printable)
{
    int res = my_str_isprintable("hello");
    cr_assert_eq(res, 1);
}

Test(my_str_isprintable, str_isnt_printable)
{
    int res = my_str_isprintable("Hello\190");
    cr_assert_eq(res, 0);
}

Test(my_str_isprintable, str_is_empty)
{
    int res = my_str_isprintable("");
    cr_assert_eq(res, 1);
}

Test(my_str_isprintable, str_is_null)
{
int res = my_str_isprintable(NULL);
cr_assert_eq(res, 1);
}

Test(my_str_isprintable, str_is_printable_two)
{
int res = my_str_isprintable(10);
cr_assert_eq(res, 0);
}