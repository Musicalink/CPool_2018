/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
}