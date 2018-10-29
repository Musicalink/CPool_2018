/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_str_isupper, str_is_upper)
{
    int res = my_str_isupper("HELLO");

    cr_assert_eq(res, 1);
}

Test(my_str_isupper, str_isnt_upper)
{
    int res = my_str_isupper("Hello");

    cr_assert_eq(res, 0);
}

Test(my_str_isupper, str_is_empty)
{
    int res = my_str_isupper("");

    cr_assert_eq(res, 1);
}

Test(my_str_isupper, str_is_null)
{
    int res = my_str_isupper(NULL);
    cr_assert_eq(res, 1);
}

Test(my_str_isupper, str_is_upper_two)
{
    int res = my_str_isupper("|");

    cr_assert_eq(res, 0);
}