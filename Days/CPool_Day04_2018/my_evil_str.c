/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

void evil_swap(char *a, char *b)
{
    char temp = *a;

    *a = *b;
    *b = temp;
}

int evil_strlen(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++);
    return (i);
}

char *my_evil_str(char *str)
{
    int max_value = evil_strlen(str) - 1;
    int i = 0;

    while (i < max_value) {
        evil_swap(&str[i], &str[max_value]);
        i++;
        max_value--;
    }
    return (str);
}