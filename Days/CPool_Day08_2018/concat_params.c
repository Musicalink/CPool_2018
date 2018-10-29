/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>

int count_array(int argc, char **argv)
{
    int result = 0;

    for (int i = 0; i < argc; i++)
        result += my_strlen(argv[i]) + 1;
    return (result);
}

char *concat_params(int argc, char **argv)
{
    int length_src = count_array(argc, argv);
    char *dest = malloc(sizeof(char) * length_src);
    int counter = 0;

    for (int j = 0; j < argc; j++) {
        for (int i = 0; argv[j][i] != '\0'; i++) {
            dest[counter] = argv[j][i];
            counter++;
        }
        dest[counter] = '\n';
        counter++;
    }
    dest[counter] = '\0';
    return (dest);
}