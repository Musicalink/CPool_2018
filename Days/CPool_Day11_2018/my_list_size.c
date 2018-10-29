/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>
#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *temp = begin;
    int i = 1;

    for (i; temp->next != NULL; i++)
        temp = temp->next;
    return (i);
}