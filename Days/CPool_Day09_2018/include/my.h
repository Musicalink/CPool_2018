/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#ifndef MY_H_
#define MY_H_

#define LINEPASS         my_putchar('\n')

void my_putchar(char c);

int my_isneg(int nb);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

int strstr_strlen(char *str);

char *my_strstr(char *str, char const *to_find);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

char *duplicate_str(char *dest, char *src, int begin_value, int end_value);

int is_alphanumeric(char c);

int delimiter_counter(char *str);

char **my_str_to_word_array(char *str);

char *my_show_word_array(char *const *tab);

int is_it_prime(int nb);

long int loop_add_nb(char const *str, long int result, int i, int counter);

long int search_for_operator(char const *str, long int result, int i);

int find_good_return(long int result);

int rev_strlen(char *str);

void sort_swap(int *a, int *b);

int is_numeric(char c);

char *letter_action(char *str, int i);

int is_alpha(char c);

#endif