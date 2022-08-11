/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** retrieve pressed key
*/

#include <ncurses.h>
#include "../include/my.h"

char get_key(int key)
{
    if (key == KEY_UP)
        return ('U');
    if (key == KEY_DOWN)
        return ('D');
    get_keybis(key);
}

char get_keybis(int key)
{
    if (key == KEY_LEFT)
        return ('L');
    if (key == KEY_RIGHT)
        return ('R');
    return (0);
}
