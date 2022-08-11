/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** move right
*/

#include "../include/my.h"

char **move_right(char **map, char key, int y, int x)
{
    if (key != 'R')
        return (map);
    else if (map[y][x+1] == '#' || map[y][x+1] == 'O' || map[y][x+1] == 'X') {
        map = specialeventright(map, y, x);
        return (map);
    }
    map[y][x] = ' ';
    map[y][x+1] = 'P';
    return (map);
}

char **move_box_right(char **map, int y, int x)
{
    if (map[y][x+2] == ' ') {
        map[y][x+2] = 'X';
        map[y][x+1] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else if (map[y][x+2] == 'O') {
        map[y][x+2] = 'X';
        map[y][x+1] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else
        return (map);
}

char **specialeventright(char **map, int y, int x)
{
    if (map[y][x+1] == '#')
        return (map);
    else if (map[y][x+1] == 'O') {
        map[y][x+1] = 'P';
        map[y][x] = ' ';
        return (map);
    }
    else
        move_box_right(map, y, x);
}
