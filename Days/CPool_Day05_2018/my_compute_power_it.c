/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int my_compute_power_it(int nb, int p)
{
    int result = nb;

    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    for (int i = 0; i < p - 1; i++)
        result = result * nb;
    return (result);
}