/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return (red << 16 | green << 8 | blue);
}