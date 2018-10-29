/*
** EPITECH PROJECT, 2018
** Nmatch
** File description:
** Check how many times two strings match
*/

#include "my.h"

int nmatch_two(char const *s1, char const *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    else if (*s2 == '*' && *s1 == '\0')
        return (nmatch(s1, s2 + 1));
    else
        return (0);
}

int nmatch(char const *s1, char const *s2)
{
    if (*s1 == *s2 && *s1 != '\0')
        return (nmatch(s1 + 1, s2 + 1));
    else if (*s2 == '*' && *s1 != '\0')
        return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
    else
        return (nmatch_two(s1, s2));
}