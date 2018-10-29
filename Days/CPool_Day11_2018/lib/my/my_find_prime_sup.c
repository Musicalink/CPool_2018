/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int is_it_prime(int nb)
{
    int result = 0;

    if (nb <= 1)
        return (0);
    for (int i = 1; i < nb; i++)
        if (nb % i == 0)
            result++;
    if (result > 1)
        return (0);
    else
        return (1);
}

int my_find_prime_sup(int nb)
{
    for (int i = nb; 42; i++)
        if (is_it_prime(i) == 1)
            return (i);
}