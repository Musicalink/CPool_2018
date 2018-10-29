/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** Maxence Carpentier
*/

#include "my.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int print_error_message(char *name, int fd)
{
    int error = errno;

    write(2, "cat: ", 9);
    write(2, name, my_strlen(name));
    if (fd == 3)
        write(2, ": Is a directory\n", 18);
    else
        switch (error) {
        case 13 :
            write(2, ": Permission denied\n", 20);
            break;
        case 2 :
            write(2, ": No such file or directory\n", 28);
            break;
        }
}

int recup_file(char buffer[21504], int fd)
{
    int second_value = 21505;

    while (second_value >= 21504) {
        second_value = read(fd, buffer, 21504);
        buffer[second_value] = '\0';
        my_putstr(buffer);
    }
    return (second_value);
}

int cat_file(int ac, char **av)
{
    int fd;
    char buffer[21504];
    int temp;
    int return_value = 0;

    for (int i = 1; i < ac; i++) {
        fd = open(av[i], O_RDONLY);
        if (fd != -1 && open(av[i], O_DIRECTORY) == -1)
            recup_file(buffer, fd);
        else {
            print_error_message(av[i], fd);
            return_value = 1;
        }
        close(fd);
        temp = my_strlen(buffer);
        for (int j = 0; j < temp; j++)
            buffer[j] = '\0';
    }
    return (return_value);
}

int cat_term(void)
{
    char buffer[21504];
    int temp = -50;

    while (buffer[0] != '\0' || temp == -50) {
        for (int j = 0; j < temp; j++)
            buffer[j] = '\0';
        read(0, buffer, 21504);
        my_putstr(buffer);
        temp = my_strlen(buffer);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2)
        return (cat_term());
    else
        return (cat_file(ac, av));
}