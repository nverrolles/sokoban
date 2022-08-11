/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** check win or loose
*/

#include <stddef.h>
#include "../include/my.h"

int check_result(int result, char **map, char *buffer, int line_nb)
{
    int y = 0;
    int x = 0;
    int count = 0;

    while (map[y] != NULL) {
        if (map[y][x] == 'O')
            count++;
        x++;
        if (map[y][x] == '\0') {
            y++;
            x = 0;
        }
    }
    count = check_p(map, count, buffer, line_nb);
    result = fenetre_vista(count);
    if (result != 0)
        result = check_loss(map, result);
    return (result);
}

int fenetre_vista(int count)
{
    if (count != 0)
        return (2);
    else
        return (0);
}

int check_p(char **map, int count, char *buffer, int line_nb)
{
    char **start = make_map(buffer, line_nb);
    int x = 0;
    int y = 0;

    while (map[y] != NULL) {
        if (map[y][x] == 'P' && start[y][x] == 'O')
            count--;
        x++;
        if (map[y][x] == '\0') {
            y++;
            x = 0;
        }
    }
    return (count);
}
