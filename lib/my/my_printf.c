/*
** EPITECH PROJECT, 2020
** printff
** File description:
** oui
*/

#include <stdio.h>
#include "my.h"

int my_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);
    int tmp = 0;
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && flag_len(str, i + 1) > 1) {
            count += print_longer(str, i, flag_len(str, i + 1), list);
            i += flag_len(str, i + 1);
        }
        else if (str[i] == '%' &&
        (tmp = check_print(str, i, list, count)) != 0) {
            i++;
            count += tmp;
        } else {
            i = print_one_char(str, i);
            count++;
        }
    }
    va_end(list);
    return 0;
}

int print_longer(char *str, int i, int len, va_list list)
{
    if (len == 2) {
        if (str[i + 1] == 'h' && str[i + 2] == 'd')
            return my_put_shortnbr(va_arg(list, int));
        else if (str[i + 1] == 'l' && str[i + 2] == 'd')
            return my_put_longnbr(va_arg(list, long int));
        return 0;
    }
    if (len == 3) {
        if (str[i + 1] == 'h' && str[i + 3] == 'd')
            return my_putchar_signed(va_arg(list, int));
        else if (str[i + 1] == 'l' && str[i + 3] == 'd')
            return my_put_longlongnbr(va_arg(list, long long int));
        return 0;
    }
    return 0;
}

int flag_len(char *str, int i)
{
    int z = i;

    while (str[i] != '\0' && str[i] != ' ' && str[i] != '%')
        i++;
    return i - z;
}

int print_one_char(char *str, int i)
{
    if (str[i] == '%' && str[i + 1] == '%') {
        i += check_mod(str, i);
        my_putchar('%');
    } else
        my_putchar(str[i]);
    return i;
}

int check_mod(char *str, int i)
{
    int count = 0;

    while (str[i] != '\0' && str[i] == '%') {
        i++;
        count++;
    }
    return count;
}