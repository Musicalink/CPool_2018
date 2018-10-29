/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>
#include "mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *tempo;
    linked_list_t *current = begin;

    *begin = NULL;
    while (current != NULL) {
        tempo = current->next;
        current->next = *begin;
        *begin = current;
        current = tempo;
    }
}