/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>

char *my_show_word_array(char *const *tab)
{
    for (int j = 0; tab[j] != NULL; j++) {
        my_putstr(tab[j]);
        my_putchar('\n');
    }
}