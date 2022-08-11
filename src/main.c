/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** main function
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int result;

    if (ac != 2)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_printf("USAGE\n");
        my_printf("     ./my_sokoban map\n");
        my_printf("DESCRIPTION\n");
        my_printf("     map file representing the warehouse map, "
                  "containing 'X' for walls,");
        my_printf("'P' for the player, 'X' for boxes and 'O' for"
                  " storage locations.\n");
        return (0);
    }
    result = fenetre_dix(av[1]);
    return (result);
}
