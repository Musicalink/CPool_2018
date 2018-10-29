/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    result *= my_compute_power_rec(nb, p - 1);
    return (result);
}