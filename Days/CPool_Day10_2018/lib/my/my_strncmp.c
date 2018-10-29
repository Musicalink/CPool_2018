/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>
#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && i < n; i++)
        if (s1[i] - s2[i] != 0)
            return (s1[i] - s2[i]);
    if (s1[i] == '\0')
        return (0 - s2[i]);
    else if (s2[i] == '\0')
        return (s1[i]);
    else
        return (0);
}