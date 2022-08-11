/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** prints an unsigned int
*/

#include "my.h"

int my_put_unsigned(unsigned int nb)
{
    int start;
    int end;

    end = nb % 10;
    start = nb / 10;
    if (start != 0) {
        my_put_nbr(start);
        my_putchar(end + '0');
    }
    return (0);
}
