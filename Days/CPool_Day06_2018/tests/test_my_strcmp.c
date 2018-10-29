/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test( my_strcmp, compare_equals_strings)
{
    int res = my_strcmp ( "Hello world", "Hello world");
    cr_assert_eq ( res, 0);
}

Test( my_strcmp, compare_strings_with_one_char_diff)
{
int res = my_strcmp ( "Hello world!", "Hello world");
cr_assert_eq ( res, 33);
}

Test( my_strcmp, compare_string_with_empty_string)
{
int res = my_strcmp ( "Hello world!", "");
cr_assert_eq ( res, 72);
}

Test( my_strcmp, compare_strings)
{
int res = my_strcmp ( "Hil", "Hel");
cr_assert_eq ( res, 4);
}

Test( my_strcmp, compare_strings_two)
{
int res = my_strcmp ( "", "Hel");
cr_assert_eq ( res, -72);
}