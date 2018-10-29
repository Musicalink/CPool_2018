/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_string)
{
    char src[12] = "Hello world";
    my_revstr (src);
    cr_assert_str_eq (src, "dlrow olleH");
}

Test(my_revstr, reverse_empty_string)
{
    char src[1] = "";
    my_revstr (src);
    cr_assert_str_eq (src, "");
}

Test(my_revstr, reverse_special_string)
{
    char src[12] = "H\n\ne\tl\nl\n\nlo";
    my_revstr (src);
    cr_assert_str_eq (src, "ol\n\nl\nl\te\n\nH");
}