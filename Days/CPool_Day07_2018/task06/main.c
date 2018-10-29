/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"

int main(int ac, char **av)
{
    char **buffer = av;
    char *temp;

    for (int y = 0; y < ac; y++)
        if (y + 1 != ac && my_strcmp(buffer[y], buffer[y + 1]) > 0) {
            temp = buffer[y];
            buffer[y] = buffer[y + 1];
            buffer[y + 1] = temp;
            y = 0;
        }
    for (int i = 0; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
}