/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_str_isnum, str_is_numeric)
{
    int res = my_str_isnum("5678");
    cr_assert_eq(res, 1);
}

Test(my_str_isnum, str_isnt_num)
{
    int res = my_str_isnum("8Hello!");
    cr_assert_eq(res, 0);
}

Test(my_str_isnum, str_is_empty)
{
    int res = my_str_isnum("");
    cr_assert_eq(res, 1);
}

Test(my_str_isnum, str_isnt_num_at_all)
{
int res = my_str_isnum("foobar");
cr_assert_eq(res, 0);
}

Test(my_str_isnum, str_is_null)
{
int res = my_str_isnum(NULL);
cr_assert_eq(res, 1);
}

Test(my_str_isnum, str_is_not_numeric)
{
int res = my_str_isnum(".");
cr_assert_eq(res, 0);
}