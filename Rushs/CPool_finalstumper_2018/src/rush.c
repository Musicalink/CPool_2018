/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include <unistd.h>
#include "my.h"
#include "rush.h"
#include <stdlib.h>
#include <stdio.h>

int free_all(int *list, char **a)
{
    free_tab(a);
    free(list);
    return (0);
}

void resolver(char **a, int *list, int inc_list, int test)
{
    for (int square = 0; square < 5; square++)
        if (check_top_loop(a, square) == 1) {
            list[inc_list] = square + 1;
            inc_list++;
        }
    for (int square = 0; square < inc_list; square++)
        if (check_bot_loop(a, list[square] - 1) == 1) {
            list[test] = list[square];
            test++;
        }
    list[test] = 0;
    inc_list = 0;
    for (int square = 0; square < test; square++)
        if (check_mid_loop(a, list[square] - 1) == 1) {
            list[inc_list] = list[square];
            inc_list++;
        }
    list[inc_list] = 0;
    display_result(a, inc_list, list);
}

int rush3(char *buff)
{
    char **a = my_str_to_word_array(buff);
    int *list = malloc(sizeof(int) * 5);
    int inc_list = 0;
    int test = 0;
    int tablen = my_tablen(a);
    int stlen = my_strlen(a[0]);
    char *side = " *BBB";


    if (a[0][0] != 'o' && tablen == 1 || stlen == 1 && a[0][0] != 'o')
        single_resolver(a, side, list);
    else
        resolver(a, list, inc_list, test);
    return (free_all(list, a));
}
