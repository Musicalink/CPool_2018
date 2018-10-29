/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

char *my_strncat(char *dest, char const *src, int n)
{
    int i = 0;
    int i2 = 0;

    for (i = 0; dest[i] != '\0'; i++);
    for (i2 = 0; src[i2] != '\0' && i2 < n; i2++)
        dest[i + i2] = src[i2];
    dest[i + i2] = '\0';
    return (dest);
}