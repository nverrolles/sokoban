/*
** EPITECH PROJECT, 2020
** printff
** File description:
** oui
*/

#include "my.h"

int check_print(char *str, int i, va_list list, int count)
{
    switch (str[i + 1]) {
        case 'c':
            my_putchar(va_arg(list, int));
            return 1;
        case 'd':
            return (my_put_nbr(va_arg(list, int)));
        case 's':
            return (my_putstr(va_arg(list, char *)));
        case 'S':
            return (my_putstr_printable(va_arg(list, char *)));
        case 'b':
            return (my_putnbr_base(va_arg(list, int), "01"));
        case 'i':
            return (my_put_nbr(va_arg(list, int)));
        case 'p':
            my_putstr("0x");
            return (my_putnbr_base(va_arg(list, int), "0123456789abcdef") + 2);
        default:
            return check_other_flag(str, i, list, count);
    }
}

int check_other_flag(char *str, int i, va_list list, int count)
{
    switch (str[i + 1]) {
        case 'n':
            return (my_put_nbr(count));
        case 'X':
            return (my_putnbr_base(va_arg(list,
            int), "0123456789ABCDEF"));
        case 'o':
            return (my_putnbr_base(va_arg(list,
            int), "01234567"));
        case 'u':
            return (my_put_nbr(va_arg(list,
            int)));
        default:
            return 0;
    }
}