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

int check_mid(char **a, int square, int y)
{
    char *lr_side = "|*BBB";
    int len = my_tablen(a) - 1;
    int stlen = my_strlen(a[len]) - 1;
    char act = lr_side[square];

        for (int x = 0; a[y][x] != '\0'; x++)
            if (x == 0 && act != a[y][x] || x == stlen && act != a[y][x])
                return (0);
            else if (x != 0 && x != stlen && a[y][x] != ' ')
                return (0);
        return (1);
}

int check_mid_loop(char **a, int square)
{
    for (int y = 1; a[y + 1] != NULL; y++)
        if (check_mid(a, square, y) == 0)
            return (0);
    return (1);
}
