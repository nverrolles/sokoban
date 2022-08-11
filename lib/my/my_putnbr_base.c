/*
** EPITECH PROJECT, 2020
** putnbrbase
** File description:
** oui
*/

#include "my.h"

int my_putnbr_base(int nb, char const *base)
{
    int result = 0;
    int rest = 0;
    int count = 1;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        count++;
    }
    result = nb / my_strlen(base);
    rest = nb % my_strlen(base);
    if (result > 0)
        count += my_putnbr_base(result, base);
    my_putchar(base[rest]);
    return count;
}