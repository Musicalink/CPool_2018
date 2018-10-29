/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>
#include "mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)())
{
    while (begin->next != NULL) {
        if ((*cmp)(begin->data, data_ref) == 0)
            return (&begin);
        begin = begin->next;
    }
    return (NULL);
}