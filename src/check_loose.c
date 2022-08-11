/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** check loose
*/

#include <stddef.h>
#include "../include/my.h"

int check_loss(char **map, int result)
{
    int x = 0;
    int y = 0;
    int count_x = x_counter(map);
    int blocked_counter = 0;

    while (map[y] != NULL) {
        if (map[y][x] == 'X')
            blocked_counter += check_blocked(map, y, x);
        x++;
        if (map[y][x] == '\0') {
            y++;
            x = 0;
        }
    }
    if (blocked_counter == count_x)
        return (1);
    return (2);
}

int x_counter(char **map)
{
    int x = 0;
    int y = 0;
    int counter = 0;

    while (map[y] != NULL) {
        if (map[y][x] == 'X')
            counter++;
        x++;
        if (map[y][x] == '\0') {
            y++;
            x = 0;
        }
    }
    return (counter);
}

int check_blocked(char **map, int y, int x)
{
    if (map[y][x-1] == '#' && map[y+1][x] == '#' ||
    map[y][x-1] == '#' && map[y-1][x] == '#' ||
    map[y][x+1] == '#' && map[y+1][x] == '#' ||
    map[y][x+1] == '#' && map[y-1][x] == '#')
        return (1);
    return (2);
}
