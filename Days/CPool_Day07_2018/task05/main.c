/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    for (int i = ac - 1; i >= 0; i--) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
}