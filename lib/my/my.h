/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** function list
*/

#include <stdarg.h>
#include <stdio.h>

int my_printf(char *, ...);
int check_mod(char *, int);
int my_putnbr_base(int, char const *);
int check_print(char *, int, va_list, int);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
int my_putstr_printable(char *);
char *my_strcpy(char *, char const *);
int my_strlen(char const *);
int print_one_char(char *, int);
int flag_len(char *, int);
int my_print_unpritable(char);
int print_longer(char *, int, int, va_list);
int my_put_shortnbr(short);
int my_put_longlongnbr(long long int);
int my_put_longnbr(long int);
int my_putchar_signed(signed char);
int check_other_flag(char *, int, va_list, int);

