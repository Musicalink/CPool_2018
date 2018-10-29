##
## EPITECH PROJECT, 2018
##
## File description:
##
##


SRC=	my_putchar.c

OBJ		=	$(SRC:.c=.o)\

NAME	= libmy.a

#Règles
all:			$(NAME)

$(NAME):		$(OBJ)
			ar rc libmy.a $(SRC) $(OBJ)
			cp libmy.a ..
			cp my.h ../../include/

clean:
			rm -f $(OBJ)

fclean:			clean
			rm -f $(NAME)

re: fclean all
