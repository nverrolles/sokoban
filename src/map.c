/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** everything about map creation
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stddef.h>
#include "../include/my.h"

char *open_map(char const *path)
{
    int fd = open(path, O_RDONLY);
    struct stat map;
    char *buffer;
    int end;

    if (fd != 3)
        exit (84);
    stat(path, &map);
    buffer = malloc(sizeof(char) * (map.st_size + 1));
    end = read(fd, buffer, map.st_size);
    buffer[end] = '\0';
    return (buffer);
}

char **make_map(char *buffer, int line_nb)
{
    char **map = malloc(sizeof(char *) * (line_nb + 1));
    int x = 0;
    int y = 0;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n' || buffer[i] == '\0') {
            map[y] = malloc(sizeof(char) * (x + 2));
            map[y][x] = '\0';
            y++;
            x = 0;
        }
        x++;
        i++;
    }
    map[y] = malloc(sizeof(char));
    map[y+1] = NULL;
    map = create_map(map, buffer, line_nb);
    return (map);
}

char **create_map(char **map, char *buffer, int line_nb)
{
    int x = 0;
    int y = 0;
    int i = 0;

    while (y != line_nb) {
        map[y][x] = buffer[i];
        if (buffer[i] == '\n') {
            y++;
            x = 0;
            i++;
            map[y][x] = buffer[i];
        }
        x++;
        i++;
    }
    return (map);
}

char **check_omap(char **o_map, char **map)
{
    int x = 0;
    int y = 0;

    while (o_map[y] != NULL) {
        if (o_map[y][x] == 'O' && map[y][x] == ' ')
            map[y][x] = 'O';
        x++;
        if (o_map[y][x] == '\0') {
            x = 0;
            y++;
        }
    }
    return (map);
}
