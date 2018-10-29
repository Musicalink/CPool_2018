/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>
#include <stdio.h>

int from_deci_to_base(int to_convert, int base)
{
    int res = 0;
    int i = 1;

    while (to_convert != 0) {
        res += (to_convert % base) * i;
        to_convert /= base;
        i *= 10;
    }
    return (res);
}