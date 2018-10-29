/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"

int detect_language(char *str)
{
    float fr[10] = {7.2, 7.64, 5.8, 7.1, 0.74, 14.72, 6.31, 0.05, 5.46, 0};
    float en[10] = {9.06, 8.17, 7.51, 6.75, 6.09, 12.7, 2.76, 2.36, 4.03, 0};
    float sp[10] = {4.63, 11.53, 8.68, 6.71, 0.7, 12.18, 2.93, 0.02, 4.97, 0};
    float ge[10] = {6.154, 6.52, 2.59, 9.78, 4.58, 16.4, 4.17, 1.92, 3.44, 0};
    float tu[10] = {3.31, 12.92, 2.98, 7.99, 1.21, 9.91, 3.24, 0, 5.92, 0};
    char result_letter[10] = "taonheuwl";

    for (int i = 0; i < 9; i++) {
        fr[9] += ABS((fr[i] - take_percentage(result_letter[i], str)));
        en[9] += ABS((en[i] - take_percentage(result_letter[i], str)));
        sp[9] += ABS((sp[i] - take_percentage(result_letter[i], str)));
        ge[9] += ABS((ge[i] - take_percentage(result_letter[i], str)));
        tu[9] += ABS((tu[i] - take_percentage(result_letter[i], str)));
    }
    if (tu[9] < fr[9] && tu[9] < en[9] && tu[9] < sp[9] && tu[9] < ge[9])
        my_putstr("=> Turkish\n");
    else
        put_language(fr[9], en[9], sp[9], ge[9]);
    return (0);
}

int put_float(float f, char c, int d)
{
    int int_f = (int)f;
    float deci = (f - ((float)int_f)) * 100;

    my_putchar(c);
    my_putchar(':');
    my_put_nbr(d);
    my_putstr(" (");
    my_put_nbr(int_f);
    my_putchar('.');
    if (deci < 10)
        my_putchar('0');
    my_put_nbr(deci);
    my_putstr("%)\n");
    return (0);
}

int main(int ac, char **av)
{
    int result = 0;

    for (int i = 2; i < ac; i++)
        if (av[i][0] >= 'A' && av[i][0] <= 'Z') {
            result = count_occuren(av[i][0] + 32, av[1]);
            put_float(take_percentage(av[i][0] + 32, av[1]), av[i][0], result);
        } else {
            result = count_occuren(av[i][0], av[1]);
            put_float(take_percentage(av[i][0], av[1]), av[i][0], result);
        }
    detect_language(av[1]);
}