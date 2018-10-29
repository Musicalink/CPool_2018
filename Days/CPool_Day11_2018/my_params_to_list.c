/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <stdlib.h>
#include "mylist.h"

int list_push(linked_list_t **list, void *data)
{
    linked_list_t *temp = malloc(sizeof(*temp));

    if (temp == NULL)
        return (84);
    temp->data = data;
    temp->next = *list;
    *list = temp;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list = NULL;

    for (int i = 0; i < ac; i++)
        list_push(&list, av[i]);
    return (list);
}