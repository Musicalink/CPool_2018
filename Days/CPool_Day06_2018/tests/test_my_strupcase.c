/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_strupcase, upcase_normal_string)
{
    char s[5] = "Hello";

    my_strupcase(s);
    cr_assert_str_eq(s, "HELLO");
}

Test(my_strupcase, upcase_empty_string)
{
char s[1] = "";

my_strupcase(s);
cr_assert_str_eq(s, "");
}

Test(my_strupcase, upcase_partially_upcase_string)
{
char s[12] = "HeLlO wOrLd";

    my_strupcase (s);
    cr_assert_str_eq(s, "HELLO WORLD");
}

Test(my_strupcase, upcase_upcase_string)
{
char s[12] = "HELLO WORLD";

my_strupcase (s);
cr_assert_str_eq(s, "HELLO WORLD");
}

Test(my_strupcase, upcase_upcase_string_two)
{
char s[12] = "HELLO WORL|";

my_strupcase (s);
cr_assert_str_eq(s, "HELLO WORL|");
}