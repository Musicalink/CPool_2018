/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int my_is_prime(int nb)
{
    int result = 0;

    if (nb <= 1)
        return (0);
    for (int i = 1; i < nb; i+=4)
        if (nb % i == 0)
            result++;
    if (result > 1)
        return (0);
    else
        return (1);
}
