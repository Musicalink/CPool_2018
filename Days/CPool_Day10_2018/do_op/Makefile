
##
## EPITECH PROJECT, 2017
## auto-Makefile
## File description:
## By Ndr
##

#Répertoire du projet
SRC_DIR		=	src
LIB_DIR     =   ../lib/my

#Fichiers sources

SRC=	$(SRC_DIR)/main.c\
		$(SRC_DIR)/operations.c


#Fichiers objets (relicats de compilation)

OBJ		=	$(SRC:.c=.o)\
			$(LIB:.c=.o)\

#Nom du projet
NAME=		do-op

#Arguments gcc
CFLAGS		= -W -Wall -Wextra -I../include

#Règles
all:		$(NAME)

$(NAME):	$(OBJ)
			make -C ../lib/my
			$(CC) -o $(NAME) $(OBJ) -L../lib/my -lmy $(CFLAGS)

debug:
		gcc -o $(NAME) $(SRC) $(GCC_ARG_DEBUG)
		gcc -C ../lib/my -o $(NAME) $(SRC) $(GCC_ARG_DEBUG)

clean:
		rm -f $(OBJ)
		make clean -C ../lib/my

fclean:		clean
			rm -f $(NAME)
			make fclean -C ../lib/my

re: fclean all
	make re -C ../lib/my

