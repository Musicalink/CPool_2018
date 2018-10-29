/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].length != 0; i++) {
        my_put_nbr(par[i].length);
        LINEPASS;
        my_putstr(par[i].str);
        LINEPASS;
        my_putstr(par[i].copy);
        LINEPASS;
        my_show_word_array(par[i].word_array);
    }
}