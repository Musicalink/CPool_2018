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

int check_top(char **a, int square, int x)
{
    char *corner_left_top = "o/AAA";
    char *corner_right_top = "o\\ACC";
    char *top_bot_side = "-*BBB";
    int len = my_tablen(a) - 1;
    int stlen = my_strlen(a[len]) - 1;

    if (x == 0 && corner_left_top[square] != a[0][x])
        return (0);
    else if (x == stlen && corner_right_top[square] != a[0][stlen])
        return (0);
    else  {
        if (x != 0 && x != stlen && a[0][x] != top_bot_side[square]) {
            return (0);
        } else
        return (1);
    }
}

int check_top_loop(char **a, int square)
{
    for (int x = 0; a[0][x] != '\0'; x++) {
        if (check_top(a, square, x) == 0)
            return (0);
        }
    return (1);
}
