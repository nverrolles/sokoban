/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** task3
*/

#include "my.h"

int my_strlen(char const *str)
{
    int nb = 0;

    while (str[nb] != '\0')
        nb++;
    return nb;
}
