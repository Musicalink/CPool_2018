/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void put_number2(char one_d, char one_u, char two_d, char two_u)
{
    if (two_d != '0' || two_u != '1') {
        my_putchar(',');
        my_putchar(' ');
    }
    my_putchar(one_d);
    my_putchar(one_u);
    my_putchar(' ');
    my_putchar(two_d);
    my_putchar(two_u);
}

void check_availability(char one_d, char one_u, char two_d, char two_u)
{
    if (one_d < two_d)
        put_number2(one_d, one_u, two_d, two_u);
    else if (one_d == two_d && one_u < two_u)
        put_number2(one_d, one_u, two_d, two_u);
}

void tick_action2(char one_d, char one_u, char two_d, char two_u)
{
    for (two_d = '0'; two_d <= '9'; two_d++)
        for (two_u = '0'; two_u <= '9'; two_u++)
            check_availability(one_d, one_u, two_d, two_u);
}

int my_print_comb2(void)
{
    char one_d = '0';
    char one_u = '0';
    char two_d = '0';
    char two_u = '0';
    int boolean = 0;

    for (one_d = '0'; one_d <= '9'; one_d++)
        for (one_u = '0'; one_u <= '9'; one_u++)
            tick_action2(one_d, one_u, two_d, two_u);
    return (0);
}