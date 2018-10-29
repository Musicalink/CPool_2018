##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## For infinadd
##

SRC_DIR=	$(realpath ./src)

LIB_DIR=	$(realpath ./lib/my)

INC_DIR=	$(realpath ./include)

SRC=		$(SRC_DIR)/bot.c\
		$(SRC_DIR)/display.c\
		$(SRC_DIR)/mid.c\
		$(SRC_DIR)/single.c\
		$(SRC_DIR)/main.c\
		$(SRC_DIR)/top.c\
		$(SRC_DIR)/rush.c\

LIB=		my

OBJ=		$(SRC:.c=.o)

NAME=		rush3

#Arguments gcc
GCC_ARG=	-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR) -W -Wall -Wextra
GCC_ARG_DEBUG=	-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR) -g

#Règles
all:		$(NAME)

$(NAME):
		make -C ./lib/my
		make clean -C ./lib/my
		gcc -o $(NAME) $(SRC) $(GCC_ARG)

debug:
		gcc -o $(NAME) $(SRC) $(GCC_ARG_DEBUG)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re: fclean all
