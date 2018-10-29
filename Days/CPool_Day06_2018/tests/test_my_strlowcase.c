/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_strlowcase, lowcase_normal_string)
{
    char s[5] = "Hello";

    my_strlowcase(s);
    cr_assert_str_eq(s, "hello");
}

Test(my_strlowcase, lowcase_empty_string)
{
char s[1] = "";

my_strlowcase(s);
cr_assert_str_eq(s, "");
}

Test(my_strlowcase, lowcase_partially_upcase_string)
{
char s[12] = "HeLlO wOrLd";

    my_strlowcase (s);
    cr_assert_str_eq(s, "hello world");
}

Test(my_strlowcase, lowcase_upcase_string)
{
char s[12] = "HELLO WORLD";

my_strlowcase (s);
cr_assert_str_eq(s, "hello world");
}