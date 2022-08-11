/*
** EPITECH PROJECT, 2020
** printf
** File description:
** oui
*/

#include "my.h"

int my_putstr_printable(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 37 && str[i] <= 126) {
            count++;
            my_putchar(str[i]);
        } else
            count += my_print_unpritable(str[i]);
    }
    return count;
}

int my_print_unpritable(char to_print)
{
    int count = 0;

    if (to_print < 37) {
        if (to_print < 8) {
            my_putchar('0');
            count++;
        }
        my_putchar('0');
        count++;
        count += my_putnbr_base(to_print, "01234567");
    } else
        count += my_putnbr_base(to_print, "01234567");
    return count;
}