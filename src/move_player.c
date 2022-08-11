/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** main move player
*/

#include "../include/my.h"

char **move_player(char **map, int c, char *buffer, int line_nb)
{
    int posx = get_posx(map);
    int posy = get_posy(map);
    char key = get_key(c);
    char **o_map = make_map(buffer, line_nb);

    map = move_up(map, key, posy, posx);
    map = move_down(map, key, posy, posx);
    map = move_right(map, key, posy, posx);
    map = move_left(map, key, posy, posx);
    map = check_omap(o_map, map);
    iwanttobreakfree(o_map, line_nb);
    return (map);
}
