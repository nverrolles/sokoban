/*
** EPITECH PROJECT, 2021
** stumper
** File description:
** fractales prototypes
*/

#ifndef FRACTALS
#define FRACTALS

int is_char(char test);
int check_error(int ac, char **av);
int fractals(char **base, int nb);
void print_single(char *to_print);
int fractal_rec(int layer, char **previous, int layer_max, char **middle);
void print_da(char **da);
char **mallok_da(char **da, int size_da, int size);
void free_da(char **da, int pos);
char **make_tab(char *str);
char **str_to_tab(char *str, char **tab);
int check_size(char **av);


#endif
