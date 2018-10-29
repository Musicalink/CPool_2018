/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test( my_strncmp, compare_equals_strings)
{
    int res = my_strncmp ( "Hello world", "Hello world", 11);
    cr_assert_eq ( res, 0);
}

Test( my_strncmp, compare_strings_with_one_char_diff)
{
int res = my_strncmp ( "Hello world!", "Hello world", 12);
cr_assert_eq ( res, 33);
}

Test( my_strncmp, compare_string_with_empty_string)
{
int res = my_strncmp ( "Hello world!", "", 11);
cr_assert_eq ( res, 72);
}

Test( my_strncmp, compare_string_with_different_size)
{
int res = my_strncmp ( "Hello world!", "Hello", 4);
cr_assert_eq ( res, 0);
}

Test( my_strncmp, compare_string_with_different_size_second)
{
int res = my_strncmp ( "Hello world!", "Hello world, how are you ?", 25);
cr_assert_eq ( res, -11);
}

Test( my_strncmp, compare_string_with_bigger_n)
{
int res = my_strncmp ( "Hello world!", "Hello world, how are you ?", 99);
cr_assert_eq ( res, -11);
}
