/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_str_islower, str_is_lower)
{
    int res = my_str_islower("hello");
    cr_assert_eq(res, 1);
}

Test(my_str_islower, str_isnt_lower)
{
    int res = my_str_islower("Hello");
    cr_assert_eq(res, 0);
}

Test(my_str_islower, str_is_empty)
{
    int res = my_str_islower("");
    cr_assert_eq(res, 1);
}

Test(my_str_islower, str_is_null)
{
int res = my_str_islower(NULL);
cr_assert_eq(res, 1);
}

Test(my_str_islower, str_is_lower_two)
{
int res = my_str_islower("|");
cr_assert_eq(res, 0);
}