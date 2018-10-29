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

int check_bot(char **a, int square, int x)
{
    char *corner_left_bot = "o\\CAC";
    char *corner_right_bot = "o/CCA";
    char *top_bot_side = "-*BBB";
    int len = my_tablen(a) - 1;
    int stlen = my_strlen(a[len]) - 1;

    if (x == 0 && corner_left_bot[square] != a[len][x])
        return (0);
    else if (x == stlen && corner_right_bot[square] != a[len][stlen])
        return (0);
    else {
        if (x != 0 && x != stlen && a[len][x] != top_bot_side[square])
            return (0);
        else
            return (1);
        }
    return (1);
}

int check_bot_loop(char **a, int square)
{
        int len = my_tablen(a) - 1;

        for (int x = 0; a[len][x] != '\0'; x++) {
        if (check_bot(a, square, x) == 0)
            return (0);
    }
    return (1);
}
