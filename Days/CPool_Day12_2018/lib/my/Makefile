##
## EPITECH PROJECT, 2018
##
## File description:
##
##


SRC=		my_putstr.c\
		my_strcpy.c\
		my_strncpy.c\
		my_compute_power_rec.c\
		my_revstr.c\
		my_str_isalpha.c\
		my_strncpy.c\
		my_compute_square_root.c\
		my_showmem.c\
		my_str_islower.c\
		my_strstr.c\
		my_getnbr.c\
		my_show_word_array.c\
		my_str_isprintable.c\
		my_strupcase.c\
		my_isneg.c\
		my_sort_int_array.c\
		my_str_isupper.c\
		my_swap.c\
		my_is_prime.c\
		my_strcapitalize.c\
		my_strlen.c\
		my_putchar.c\
		my_strcat.c\
		my_strlowcase.c\
		my_put_nbr.c\
		my_strcmp.c\
		my_strncat.c\
		my_str_to_word_array.c\


OBJ =	$(SRC:.c=.o)

NAME = libmy.a

#Règles
all:			$(NAME)

$(NAME):		$(OBJ)
			ar rc libmy.a $(SRC) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:			clean
			rm -f $(NAME)

re: fclean all
