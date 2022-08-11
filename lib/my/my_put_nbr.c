/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** task07
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int count = 1;
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return 11;
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        count++;
    }
    if (nb > 9)
        count += my_put_nbr(nb / 10);
    my_putchar(nb % 10 + 48);
    return count;
}

int my_putchar_signed(signed char nb)
{
    int count = 1;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        count++;
    }
    if (nb > 9)
        count += my_put_longnbr(nb / 10);
    my_putchar(nb % 10 + 48);
    return count;
}

int my_put_longnbr(long int nb)
{
    int count = 1;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        count++;
    }
    if (nb > 9)
        count += my_put_longnbr(nb / 10);
    my_putchar(nb % 10 + 48);
    return count;
}

int my_put_longlongnbr(long long int nb)
{
    int count = 1;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        count++;
    }
    if (nb > 9)
        count += my_put_longlongnbr(nb / 10);
    my_putchar(nb % 10 + 48);
    return count;
}

int my_put_shortnbr(short nb)
{
    int count = 1;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
        count++;
    }
    if (nb > 9)
        count += my_put_shortnbr(nb / 10);
    my_putchar(nb % 10 + 48);
    return count;
}