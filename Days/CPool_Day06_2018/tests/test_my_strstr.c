/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, find_strings)
{
    char *str = "Hello world";

    cr_assert_str_eq(my_strstr(str, "w"), strstr(str, "w"));
    cr_assert_null(my_strstr(str, "z"));
    cr_assert_null(my_strstr(NULL, "z"));
    cr_assert_null(my_strstr("z", NULL));
}