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
				my_strcat.c \
				my_strlcat.c \
				my_strncat.c \
				my_strchr.c \
				my_strrchr.c \
				my_strstr.c \

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