/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** move left
*/

#include "../include/my.h"

char **specialeventleft(char **map, int y, int x)
{
    if (map[y][x-1] == '#')
        return (map);
    else if (map[y][x-1] == 'O') {
        map[y][x-1] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else
        move_box_left(map, y, x);
}

char **move_box_left(char **map, int y, int x)
{
    if (map[y][x-2] == ' ') {
        map[y][x-2] = 'X';
        map[y][x-1] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else if (map[y][x-2] == 'O') {
        map[y][x-2] = 'X';
        map[y][x-1] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else
        return (map);
}

char **move_left(char **map, char key, int y, int x)
{
    if (key != 'L')
        return (map);
    else if (map[y][x-1] == '#' || map[y][x-1] == 'O' || map[y][x-1] == 'X') {
        map = specialeventleft(map, y, x);
        return (map);
    }
    map[y][x] = ' ';
    map[y][x-1] = 'P';
    return (map);
}
