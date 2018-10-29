/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void put_number(char c, char d, char u)
{
    my_putchar(',');
    my_putchar(' ');
    my_putchar(c);
    my_putchar(d);
    my_putchar(u);
}

void tick_action(char c, char d, char u, int boolean)
{
    for (u = '0'; u < ':'; u++)
        if (c < d && d < u)
            if (c == '0' && u == '2') {
                my_putchar(c);
                my_putchar(d);
                my_putchar(u);
                boolean++;
            } else
                put_number(c, d, u);
}

int my_print_comb(void)
{
    char c = '0';
    char d = '0';
    char u = '0';
    int boolean = 0;

    for (c = '0'; c < '8'; c++)
        for (d = '0'; d < ':'; d++)
            tick_action(c, d, u, boolean);
    return (0);
}