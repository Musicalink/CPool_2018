/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *str, int n);

Test( my_strncpy, copy_string_in_empty_array)
{
    char dest[12];

    my_strncpy(dest, "Hello world", 11);
    cr_assert_str_eq(dest, "Hello world" );
}

Test( my_strncpy, copy_special_string_in_empty_array)
{
    char dest[12];

    my_strncpy(dest, "\n\nHe\nl\nlo\t\n", 11);
    cr_assert_str_eq(dest, "\n\nHe\nl\nlo\t\n");
}

Test( my_strncpy, copy_empty_string_in_empty_array)
{
    char dest[1];

    my_strncpy(dest, "", 1);
    cr_assert_str_eq(dest, "");
}

Test( my_strncpy, copy_big_string_in_empty_array)
{
    char dest[4];

    my_strncpy(dest, "Epitech", 3);
    cr_assert_str_eq(dest, "Epi");
}