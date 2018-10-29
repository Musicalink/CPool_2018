/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void sort_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
        if (i != size - 1 && array[i] > array[i + 1]) {
            sort_swap(&array[i], &array[i + 1]);
            i = -1;
        }
}