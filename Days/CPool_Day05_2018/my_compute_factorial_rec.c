/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int recursive_factorial(int nb, int result, int i)
{
    if (i <= nb)
        return (recursive_factorial(nb, result * i, i + 1));
    return (result);
}

int my_compute_factorial_rec(int nb)
{
    if (nb > 12 || nb < 0)
        return (0);
    return (recursive_factorial(nb, 1, 1));
}