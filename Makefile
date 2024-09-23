NAME = libftprintf.a
HEADERS = ft_printf.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

SRCS_FILES = ft_print_char.c ft_print_str.c

OBJ_FILES = $(SRCS_FILES:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ_FILES)
					$(AR) $(NAME) $(OBJ_FILES)

%.o:		%.c
					$(CC) $(CFLAGS) -c $< -o $@

clean:
					$(RM) $(OBJ_FILES)

fclean:				$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
