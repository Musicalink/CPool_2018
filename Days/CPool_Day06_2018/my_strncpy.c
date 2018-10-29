/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>

char *my_strncpy(char *dest, char const *str, int n)
{
    int i = 0;

    for (i = 0; i < n && str[i] != '\0'; i++)
        dest[i] = str[i];
    for (i; i < n; i++)
        dest[i] = '\0';
    return (dest);
}