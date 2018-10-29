/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>
#include "do_op.h"

int is_it_operator(char *str)
{
    if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')
        return (1);
    else if (str[0] == '%')
        return (1);
    else
        return (0);
}

int check_operator(char ope)
{
    if (ope == '+' || ope == '-') {
        if (ope == '+')
            return (0);
        else if (ope == '-')
            return (1);
    } else if (ope == '/' || ope == '%' || ope == '*')
        if (ope == '/')
            return (2);
        else if (ope == '%')
            return (3);
        else
            return (4);
}

int do_ope(char *ope_one, char ope, char *ope_two, int ope_nb)
{
    int (*tab[5])(int one, int two) = {do_add, do_min, do_div, do_mod, do_mul};

    if (my_getnbr(ope_two) == 0 && ope_nb == 2) {
        write(2, "Stop: division by zero", 22);
        return (84);
    } else if (my_getnbr(ope_two) == 0 && ope_nb == 3) {
        write(2, "Stop: division by zero", 22);
        return (84);
    }
    my_put_nbr(tab[ope_nb](my_getnbr(ope_one), my_getnbr(ope_two)));
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 4 || is_it_operator(av[2]) != 1)
        return (84);
    return (do_ope(av[1], av[2][0], av[3], check_operator(av[2][0])));
}