##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## lib
##

SRC	=	my_putchar.c			\
		my_putstr.c			\
		my_put_nbr.c			\
		my_put_unsigned.c		\
		my_printf.c			\
		my_putnbr_base.c		\
		my_strlen.c			\
		printf_flags.c			\
		my_putnbr_base.c		\
		my_putstr_printable.c		\
		my_strcpy.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		mv $(NAME) ../
		make clean
clean:
		rm *.o

fclean:		clean
		rm -f ../$(NAME)
		rm -f $(NAME)

re:		fclean all
