/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** game main
*/

#include <stdlib.h>
#include <fcntl.h>
#include <ncurses.h>
#include "../include/my.h"

int fenetre_dix(char const *path)
{
    char *buffer = open_map(path);
    int line_nb = check_map(buffer);
    char **map = make_map(buffer, line_nb);
    int key;
    int result = 2;

    initscr();
    result = fenetre_xp(map, buffer, line_nb);
    iwanttobreakfree(map, line_nb);
    free(buffer);
    endwin();
    return (result);
}

int fenetre_xp(char **map, char *buffer, int line_nb)
{
    int key;
    int result = 2;

    while (result > 1) {
        clear();
        print_function(map, line_nb);
        keypad(stdscr, true);
        key = getch();
        while (key == 410)
            key = getch();
        if (key == ' ')
            map = make_map(buffer, line_nb);
        else if (key != 410)
            map = move_player(map, key, buffer, line_nb);
        result = check_result(result, map, buffer, line_nb);
    }
    return (result);
}

char **print_function(char **map, int line_nb)
{
    int i = 0;

    while (i < line_nb) {
        printw(map[i]);
        i++;
    }
}
