##
## EPITECH PROJECT, 2020
## oui
## File description:
## oui
##

SRC	=	./src/main.c		\
		./src/check_loose.c	\
		./src/check_result.c	\
		./src/error.c		\
		./src/free.c		\
		./src/game.c		\
		./src/get_key.c		\
		./src/get_pos.c		\
		./src/map.c		\
		./src/move_down.c	\
		./src/move_up.c		\
		./src/move_left.c	\
		./src/move_right.c	\
		./src/move_player.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all: library $(NAME)

library:
	make -C ./lib/my

$(NAME): $(OBJ)
	gcc -o $(NAME) $(SRC) -lncurses -L ./lib -lmy
	make clean

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f $(OBJ)
	make fclean -C ./lib/my

re:	fclean all clean
