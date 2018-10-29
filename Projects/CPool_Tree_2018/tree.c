/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void draw_trunk(int size, int trunk_size, int space)
{
    for (int i = 0; i < size; i++) {
        for (int k = 0; k < space; k++)
            my_putchar(' ');
        for (int j = 0; j < trunk_size; j++)
            my_putchar('|');
        my_putchar('\n');
    }
}

void leaf_drawer(int *tree_space, int *space_inc, int *base_lf, int *lf_inc)
{
    for (int spacer = 0; spacer < (*tree_space + *space_inc); spacer++)
        my_putchar(' ');
    for (int leaf = 0; leaf < (*base_lf + *lf_inc); leaf++)
        my_putchar('*');
    *lf_inc += 2;
    *space_inc -= 1;
    my_putchar('\n');
}

void draw_leaf(int size, int alternate_size, int tree_space)
{
    int tr_nb = 0;
    int base_tr = 4;
    int incrementer = 0;
    int base_lf = 1;
    int lf_inc = 0;
    int space_inc = 0;
    int var_lf = 2;

    for (tr_nb; tr_nb < size; tr_nb++) {
        for (int brancher = 0; brancher < (base_tr + incrementer); brancher++)
            leaf_drawer(&tree_space, &space_inc, &base_lf, &lf_inc);
        if (tr_nb % 2 == 0)
            var_lf += 2;
        lf_inc -= var_lf;
        space_inc += var_lf / 2;
        incrementer++;
    }
}

int calculate_space_size(int size)
{
    int base = 3;
    int incrementer = 0;
    int result = 4;

    for (int i = 1; i < size; i++) {
        result += (base + incrementer);
        if (i % 2 == 1)
            incrementer++;
    }
    return (result);
}

void tree(int size)
{
    int tree_space = calculate_space_size(size);
    if (size % 2 == 1) {
        draw_leaf(size, size, tree_space - 1);
        draw_trunk(size, size, tree_space - (size / 2) - 1);
    } else {
        draw_leaf(size, size + 1, tree_space - 1);
        draw_trunk(size, size + 1, tree_space - (size / 2) - 1);
    }
}