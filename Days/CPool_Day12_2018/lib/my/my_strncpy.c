/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>
#include "my.h"

char *my_strncpy(char *dest, char const *str, int n)
{
    int i = 0;

    if (str == NULL || str[0] == '\0') {
        dest[0] = '\0';
        return (dest);
    }
    for (i = 0; i < n && str[i] == '\0'; i++)
        dest[i] = str[i];
    if (n > i)
        dest[i] = '\0';
    return (dest);
}