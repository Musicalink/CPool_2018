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

void display_spliter(int inc_list, int i)
{
    if (inc_list != 1 && i != 0)
        my_putstr(" || ");
}

void display_result(char **a, int inc_list, int *list)
{
    if (inc_list == 0)
        my_putstr("none");
    else
        for (int i = 0; i < inc_list; i++) {
            display_spliter(inc_list, i);
            my_putstr("[rush1-");
            my_put_nbr(list[i]);
            my_putstr("] ");
            my_put_nbr(my_strlen(a[0]));
            my_putchar(' ');
            my_put_nbr(my_tablen(a));
        }
    my_putchar('\n');
}
