/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** move down
*/

#include "../include/my.h"

char **specialeventdown(char **map, int y, int x)
{
    if (map[y + 1][x] == '#')
        return (map);
    else if (map[y + 1][x] == 'O') {
        map[y + 1][x] = 'P';
        map[y][x] = ' ';
        return (map);
    } else
        move_box_down(map, y, x);
}

char **move_box_down(char **map, int y, int x)
{
    if (map[y+2][x] == ' ') {
        map[y+2][x] = 'X';
        map[y+1][x] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else if (map[y+2][x] == 'O') {
        map[y+2][x] = 'X';
        map[y+1][x] = 'P';
        map[y][x] = ' ';
        return (map);
    } else
        return (map);
}

char **move_down(char **map, char key, int y, int x)
{
    if (key != 'D')
        return (map);
    else if (map[y+1][x] == '#' || map[y+1][x] == 'O' || map[y+1][x] == 'X') {
        map = specialeventdown(map, y, x);
        return (map);
    }
    map[y][x] = ' ';
    map[y+1][x] = 'P';
    return (map);
}
