/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    for (; i * i < nb; i++);
    if (i * i % nb == 0)
        return (1);
    else
        return (0);
}