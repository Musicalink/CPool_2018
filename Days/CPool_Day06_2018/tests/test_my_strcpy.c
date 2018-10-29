/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test( my_strcpy, copy_string_in_empty_array)
{
    char dest[12];

    my_strcpy(dest, "Hello world");
    cr_assert_str_eq(dest, "Hello world");
}

Test( my_strcpy, copy_special_string_in_empty_array)
{
    char dest[11];

    my_strcpy(dest, "\n\nHe\nl\nlo\t\n");
    cr_assert_str_eq(dest, "\n\nHe\nl\nlo\t\n");
}

Test( my_strcpy, copy_empty_string_in_empty_array3)
{
    char dest[1];

    my_strcpy(dest, NULL);
    cr_assert_str_eq(dest, "");
}