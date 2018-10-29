/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>

char *dupper(char const *src)
{
    int length_src = my_strlen(src);
    char *dest = malloc(sizeof(char) * length_src + 1);
    int i = 0;

    for (i; i < length_src; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *dest = malloc(sizeof(struct info_param) * ac);
    int i = 0;

    for (i = 0; i < ac; i++) {
        dest[i].length = my_strlen(av[i]);
        dest[i].str = av[i];
        dest[i].copy = dupper(av[i]);
        dest[i].word_array = my_str_to_word_array(av[i]);
    }
    dest[i].length = 0;
    return (dest);
}