/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#ifndef MYLIST_H_
#define MYLIST_H_

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

#define L_LIST linked_list_t;

#endif