/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void write_squareone(int x, int y, int i, int j)
{
    if (j == x - 1 || j == 0) {
        if (i == 0 || i == y - 1)
            my_putchar('o');
        else
            my_putchar('|');
    } else if (i > 0 && i < y - 1) {
        if (j > 0 || j < y - 1)
            my_putchar(' ');
    } else
        my_putchar('-');
}

void rush_one(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 13);
        x = 0;
        y = 0;
    }
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            write_squareone(x, y, i, j);
        }
        my_putchar('\n');
    }
}