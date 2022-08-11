/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** task2
*/

#include "my.h"

int my_putstr(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
        count++;
    }
    return count;
}
