/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <unistd.h>
#include "my.h"
#include "rush.h"
#include <stdlib.h>
#include <stdio.h>

int check_single(char **a, int square, char *side)
{
    for (int y = 0; a[y] != NULL; y++)
        for (int x = 0; a[y][x] != '\0'; x++)
            if (a[y][x] != side[square])
                return (0);
    return (1);
}

void single_resolver(char **a, char *side, int *list)
{
    int inc_list = 0;

    for (int square = 0; square < 5; square++)
        if (check_single(a, square, side) == 1) {
            list[inc_list] = square + 1;
            inc_list++;
        }
    list[inc_list] = 0;
    display_result(a, inc_list, list);
}
