/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** frees map
*/

#include <stdlib.h>

void iwanttobreakfree(char **map, int line_nb)
{
    int y = 0;

    while (y > line_nb) {
        free(map[y]);
        y++;
    }
    free(map);
}
