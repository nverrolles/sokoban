/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** function list
*/

int fenetre_dix(char const *path);
char *open_map(char const *path);
int check_map(char *buffer);
char **move_player(char **map, int c, char *buffer, int line_nb);
char **make_map(char *buffer, int line_nb);
char **create_map(char **map, char *buffer, int line_nb);
char **print_function(char **map, int line_nb);
int get_posx(char **map);
int get_posy(char **map);
char get_key(int key);
char get_keybis(int key);
char **move_up(char **map, char key, int y, int x);
char **move_right(char **map, char key, int y, int x);
char **move_left(char **map, char key, int y, int x);
char **move_down(char **map, char key, int y, int x);
char **specialeventup(char **map, int y, int x);
char **specialeventdown(char **map, int y, int x);
char **specialeventleft(char **map, int y, int x);
char **specialeventright(char **map, int y, int x);
char **check_omap(char **o_map, char **map);
int check_result(int result, char **map, char *buffer, int line_nb);
int fenetre_vista(int count);
int check_p(char **map, int count, char *buffer, int line_nb);
int check_loss(char **map, int result);
int check_blocked(char **map, int y, int x);
int x_counter(char **map);
void iwanttobreakfree(char **map, int line_nb);
int fenetre_xp(char **map, char *buffer, int line_nb);
int my_printf(char *str, ...);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_put_unsigned(unsigned int nb);
int my_put_nbr_base(int nb, char * base);
char **move_box_up(char **map, int y, int x);
char **move_box_down(char **map, int y, int x);
char **move_box_left(char **map, int y, int x);
char **move_box_right(char **map, int y, int x);
