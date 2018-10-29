/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"

void put_language_next(float fr, float en, float sp, float ge)
{
    if (sp < en && sp < fr && sp < ge)
        my_putstr("=> Spanish");
    else if (ge < fr && ge < sp && ge < en)
        my_putstr("=> German");
}

void put_language(float fr, float en, float sp, float ge)
{
    if (fr < en && fr < sp && fr < ge)
        my_putstr("=> French");
    else if (en < fr && en < sp && en < ge)
        my_putstr("=> English");
    else
        put_language_next(fr, en, sp, ge);
}
