/*
** EPITECH PROJECT, 2018
** Match
** File description:
** Check if two strings match
*/

#include "my.h"

int match_two(char const *s1, char const *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    else if (*s2 == '*' && *s1 == '\0')
        return (match(s1, s2 + 1));
    else
        return (0);
}

int match(char const *s1, char const *s2)
{
    if (*s1 == *s2 && *s1 != '\0')
        return (match(s1 + 1, s2 + 1));
    else if (*s2 == '*' && *s1 != '\0')
        return (match(s1 + 1, s2) || match(s1, s2 + 1));
    else
        return (match_two(s1, s2));
}