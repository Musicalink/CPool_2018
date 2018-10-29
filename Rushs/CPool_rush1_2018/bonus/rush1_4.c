/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void write_squarefour(int x, int y, int i, int j)
{
    if (y > 1 && x > 1 && j == x - 1 || j == 0 && y > 1 && x > 1) {
        if (i == 0 && j == 0 || i == y - 1 && j == 0)
            my_putchar('A');
        else if (i == 0 && j == x - 1 || i == y - 1 && j == x - 1)
            my_putchar('C');
        else
            my_putchar('B');
    } else if (i > 0 && i < y - 1 && x > 1) {
        if (j > 0 || j < y - 1)
            my_putchar(' ');
    } else
        my_putchar('B');
}

void rush_four(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 13);
        x = 0;
        y = 0;
    }
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            write_squarefour(x, y, i, j);
        }
        my_putchar('\n');
    }
}