/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#ifndef RUSH_H_
#define RUSH_H_

#define BUFF_SIZE 4096

int check_bot(char **a, int square, int x);

int check_bot_loop(char **a, int square);

void display_spliter(int inc_list, int i);

void display_result(char **a, int inc_list, int *list);

int check_single(char **a, int square, char *side);

void single_resolver(char **a, char *side, int *list);

int check_top(char **a, int square, int x);

int check_top_loop(char **a, int square);

int check_mid(char **a, int square, int y);

int check_mid_loop(char **a, int square);

int free_all(int *list, char **a);

void resolver(char **a, int *list, int inc_list, int test);

int rush3(char *buff);

#endif
