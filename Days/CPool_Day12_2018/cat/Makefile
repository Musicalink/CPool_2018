##
## EPITECH PROJECT, 2017
## auto-Makefile
## File description:
## By Ndr
##

SRC_DIR=	$(realpath ./src)

LIB_DIR=	$(realpath ../lib/my)

INC_DIR=	$(realpath ../include)

SRC=		$(SRC_DIR)/my_cat.c\

LIB=		my

OBJ=		$(SRC:.c=.o)

NAME=		cat

#Arguments gcc
GCC_ARG=	-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR)
GCC_ARG_DEBUG=	-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR) -g

#Règles
all:		$(NAME)

$(NAME):
		make -C ../lib/my
		make clean -C ../lib/my
		gcc -o $(NAME) $(SRC) $(GCC_ARG)

debug:
		gcc -o $(NAME) $(SRC) $(GCC_ARG_DEBUG)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re: fclean all
