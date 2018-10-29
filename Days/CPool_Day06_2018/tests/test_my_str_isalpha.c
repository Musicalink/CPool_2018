/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_str_isalpha, str_is_alphanumeric)
{
    int res = my_str_isalpha("Hello");
    cr_assert_eq(res, 1);
}

Test(my_str_isalpha, str_isnt_alpha)
{
    int res = my_str_isalpha("8Hello!");
    cr_assert_eq(res, 0);
}

Test(my_str_isalpha, str_is_empty)
{
    int res = my_str_isalpha("");
    cr_assert_eq(res, 1);
}