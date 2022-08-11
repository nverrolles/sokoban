/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** retrieves P position
*/

#include <stdlib.h>
#include <stddef.h>
#include "../include/my.h"

int get_posy(char **map)
{
    int y = 0;
    int x = 0;

    while (map[y] != NULL) {
        if (map[y][x] == 'P')
            return (y);
        x++;
        if (map[y][x] == '\0') {
            y++;
            x = 0;
        }
    }
    exit (84);
}

int get_posx(char **map)
{
    int y = 0;
    int x = 0;

    while (map[y] != NULL) {
        if (map[y][x] == 'P')
            return (x);
        x++;
        if (map[y][x] == '\0') {
            y++;
            x = 0;
        }
    }
    exit (84);
}
