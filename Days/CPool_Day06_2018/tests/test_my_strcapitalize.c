/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_strcapitalize, capitalize_normal_string)
{
    char s[6] = "Hello";

    my_strcapitalize(s);
    cr_assert_str_eq(s, "Hello.");
}

Test(my_strcapitalize, capitalize_empty_string)
{
char s[1] = "";

my_strcapitalize(s);
cr_assert_str_eq(s, "");
}

Test(my_strcapitalize, capitalize_partially_upcase_string)
{
char s[12] = "HeLlO wOrLd";

    my_strcapitalize (s);
    cr_assert_str_eq(s, "Hello World.");
}

Test(my_strcapitalize, capitalize_upcase_string)
{
char s[12] = "HELLO WORLD";

my_strcapitalize (s);
cr_assert_str_eq(s, "Hello World.");
}