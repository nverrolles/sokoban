/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** error check
*/

#include <stdlib.h>
#include "../include/my.h"

int check_map(char *buffer)
{
    int i = 0;
    int line_nb = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] != ' ' && buffer[i] != '#' && buffer[i] != 'P' &&
            buffer[i] != 'O' && buffer[i] != 'X' && buffer[i] != '\n')
            exit (84);
        if (buffer[i] == '\n')
            line_nb++;
        i++;
    }
    return (line_nb);
}
