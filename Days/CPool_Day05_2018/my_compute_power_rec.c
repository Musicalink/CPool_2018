/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int recursive_power(int nb, int p, int result)
{
    if (p > 1)
        return (recursive_power(nb, p - 1, result * nb));
    else if (p < 0)
        return (0);
    else
        return (1);
}

int my_compute_power_rec(int nb, int p)
{
    return (recursive_power(nb, p, nb));
}