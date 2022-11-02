NAME		= mylib.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= my_bzero.c \
				my_isalnum.c \
				my_isalpha.c \
				my_isdigit.c \
				my_memccpy.c \
				my_memchr.c \
				my_memcmp.c \
				my_memcpy.c \
				my_memmove.c \
				my_memset.c \
				my_strdup.c \
				my_strlen.c \
				my_atoi.c \
				my_isascii.c \

OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re