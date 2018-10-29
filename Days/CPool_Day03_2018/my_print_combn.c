/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

int my_put_nbr2(int nb)
{
    if (nb >= 0) {
        if (nb >= 10)
            my_put_nbr2(nb / 10);
        my_putchar(nb % 10 + '0');
    } else if (nb < 0) {
        my_putchar('-');
        my_put_nbr2(nb * -1);
    }
}

int power(int base)
{
    int result = 1;

    for (int i = 0; i < base; i++)
        result *= 10;
    return (result);
}

int get_number(int a, int n)
{
    int b = a / power(n);
    int result = (a - b * power(n)) / (power(n - 1));

    return (result);
}

void put(int n, int value)
{
    int boolean = 0;
    int boolean2 = 0;

    for (int i = 0; i <= value; i++) {
        boolean = 0;
        for (int j = 1; j < n; j++)
            if (get_number(i, j) <= get_number(i, j + 1))
                boolean++;
        if (boolean == 0) {
            if (boolean2 != 0) {
                my_putchar(',');
                my_putchar(' ');
            }
            for (int p = 0; p < n; p++)
                if (i < power(p) && i != 0)
                    my_putchar('0');
            my_put_nbr2(i);
            boolean2++;
        }
    }
}

int my_print_combn(int n)
{
    int value = 9;
    int boolean = 0;
    int boolean2 = 0;

    for (int i = 1; i < n; i++) {
        value *= 10;
        value += 9;
    }
    put(n, value);
    return (0);
}