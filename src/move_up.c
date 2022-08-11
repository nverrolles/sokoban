/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** move_up
*/

#include "../include/my.h"

char **move_up(char **map, char key, int y, int x)
{
    if (key != 'U')
        return (map);
    else if (map[y-1][x] == '#' || map[y-1][x] == 'O' || map[y-1][x] == 'X') {
        map = specialeventup(map, y, x);
        return (map);
    }
    map[y][x] = ' ';
    map[y-1][x] = 'P';
    return (map);
}

char **specialeventup(char **map, int y, int x)
{
    if (map[y-1][x] == '#')
        return (map);
    else if (map[y-1][x] == 'O') {
        map[y-1][x] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else
        move_box_up(map, y, x);
}

char **move_box_up(char **map, int y, int x)
{
    if (map[y-2][x] == ' ') {
        map[y-2][x] = 'X';
        map[y-1][x] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else if (map[y-2][x] == 'O') {
        map[y-2][x] = 'X';
        map[y-1][x] = 'P';
        map[y][x] = ' ';
        return (map);
    } else
        return (map);
}
