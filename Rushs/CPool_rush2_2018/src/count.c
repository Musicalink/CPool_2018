/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"

int count_occuren(char c, char *str)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c || str[i] == c - 32) {
            result++;
        }
    return (result);
}

int count_letters(char *s)
{
    int result = 0;

    for (int i = 0; s[i] != '\0'; i++)
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            result++;
    return (result);
}

float take_percentage(char occurence, char *s)
{
    int occ_nb = count_occuren(occurence, s);

    return (((float)occ_nb) / ((float)count_letters(s)) * 100);
}
