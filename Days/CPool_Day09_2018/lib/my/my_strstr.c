/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>

int strstr_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strstr(char *str, char const *to_find)
{
    int i2 = 0;

    if (str == NULL || to_find == NULL)
        return (NULL);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[i2])
            i2++;
        else
            i2 = 0;
        i2 = i2;
        if (to_find[i2] == '\0') {
            return (&str[i - (strstr_strlen(to_find) - 1)]);
        }
    }
    return (NULL);
}