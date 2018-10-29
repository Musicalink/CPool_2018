/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>
#include "mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int(*f)(void *))
{
    while (begin->next != NULL) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}