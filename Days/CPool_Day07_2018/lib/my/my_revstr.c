/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>
#include <stdio.h>

int rev_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_revstr(char *str)
{
    int i2 = rev_strlen(str) - 1;
    char c;

    for (int i = 0; i < i2; i++) {
        c = str[i];
        str[i] = str[i2];
        str[i2] = c;
        i2--;
    }
    return (str);
}