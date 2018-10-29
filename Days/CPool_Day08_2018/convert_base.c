/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>

char *my_revnumber(char *str)
{
    int i2 = my_strlen(str) - 1;
    char c;

    for (int i = 1; i < i2; i++) {
        c = str[i];
        str[i] = str[i2];
        str[i2] = c;
        i2--;
    }
    return (str);
}

char *my_converter(int nb, char *base_to, char *str, int saver)
{
    int counter = 0;

    if (str == NULL) {
        for (int i = nb; i != 0; i /= 10)
            counter++;
        str = malloc(sizeof(char) * counter);
    }
    if (nb < 0) {
        str[saver] = '-';
        saver++;
        my_converter(-nb, base_to, str, saver);
    } else if (nb > 0) {
        str[saver] = base_to[nb % 10];
        saver++;
        my_converter(nb / 10, base_to, str, saver);
    }
    return (str);
}

int char_to_int(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else
        return (c - 'A' + 10);
}

char *make_tmp(char *nbr, char *base_from, int start_base)
{
    int counter = 0;
    char *tmp = malloc(sizeof(char) * start_base);

    for (int i = 0; nbr[i] != '\0'; i++) {
        if (i == 0 && nbr[0] == '-') {
            tmp[0] = '-';
            counter++;
        }
        for (int j = 0; base_from[j] != '\0'; j++)
            if (base_from[j] == nbr[i]) {
                tmp[counter] = j + '0';
                counter++;
            }
    }
    return (tmp);
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int start_base = my_strlen(base_from);
    char *tmp = make_tmp(nbr, base_from, start_base);
    int to_convert;
    char *res;

    to_convert = from_base_to_deci(my_getnbr(tmp), start_base);
    to_convert = from_deci_to_base(to_convert, my_strlen(base_to));
    res = my_converter(to_convert, base_to, res, 0);
    return (my_revnumber(res));
}