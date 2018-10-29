/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

void chose_your_way_three(int way, int x, int y)
{
    if (way == 5)
        rush_five(x, y);
}

void chose_your_way_two(int way, int x, int y)
{
    if (way == 3)
        rush_three(x, y);
    else if (way == 4)
        rush_four(x, y);
    else
        chose_your_way_three(way, x, y);
}

void chose_your_way(int way, int x, int y)
{
    if (way == 1)
        rush_one(x, y);
    else if (way == 2)
        rush_two(x, y);
    else
        chose_your_way_two(way, x, y);
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    for (int i = 0; av[1][i] != '\0'; i++)
        if (av[1][i] < '0' || av[1][i] > '9')
            return (84);
    for (int i = 0; av[2][i] != '\0'; i++)
        if (av[2][i] < '0' || av[2][i] > '9')
            return (84);
    for (int i = 0; av[3][i] != '\0'; i++)
        if (av[3][i] < '0' || av[3][i] > '9')
            return (84);
    chose_your_way(my_getnbr(av[1]), my_getnbr(av[2]), my_getnbr(av[3]));
}