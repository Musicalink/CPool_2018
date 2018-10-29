##
## EPITECH PROJECT, 2018
## A Makefile
## File description:
## rush 2
##

SRC_DIR		=	src
LIB_DIR     =   lib/my

SRC=		$(SRC_DIR)/count.c\
			$(SRC_DIR)/langage_printer.c\
			$(SRC_DIR)/main.c\

OBJ		=	$(SRC:.c=.o)\
			$(LIB:.c=.o)\

NAME=		rush2

CFLAGS		= -W -Wall -Wextra -Iinclude

all:		$(NAME)
			make -C lib/my


$(NAME):		$(OBJ)
			$(CC) -o $(NAME) $(OBJ) -Llib/my -lmy $(CFLAGS)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
