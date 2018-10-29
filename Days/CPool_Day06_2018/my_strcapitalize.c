/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>

int is_alpha(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int is_numeric(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

char *letter_action(char *str, int i)
{
    if (str[i] >= 'a' && str[i] <= 'z') {
        if (i == 0) {
            str[i] -= 32;
        } else if (is_alpha(str[i - 1]) == 0 && is_numeric(str[i - 1]) == 0)
            str[i] -= 32;
    } else if (str[i] >= 'A' && str[i] <= 'Z') {
        if (i != 0 && is_alpha(str[i - 1]) == 1 || is_numeric(str[i - 1]) == 1)
            str[i] += 32;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alpha(str[i]) == 1)
            str = letter_action(str, i);
        if (str[i + 1] == '\0' && str[i] != '.') {
            str[i + 1] = '.';
            str[i + 2] = '\0';
        }
    }
    return (str);
}