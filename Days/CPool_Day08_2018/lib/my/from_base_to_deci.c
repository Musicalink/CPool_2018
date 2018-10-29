/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <stdlib.h>
#include <stdio.h>

int from_base_to_deci(int to_convert, int base)
{
    int res = 0;
    int i = 0;

    while (to_convert != 0) {
        res += (to_convert % 10) * my_compute_power_rec(base, i);
        i++;
        to_convert /= 10;
    }
    return (res);
}