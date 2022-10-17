NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra


SRC = ft_atoi.c ft_calloc.c ft_isalnum.c ft_isalpha.c 

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(NAME)