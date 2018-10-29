/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb > 12 || nb < 0)
        return (0);
    for (int i = 1; i <= nb; i++)
        result *= i;
    return (result);
}