NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

SRC = 	ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_striteri \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

SRC_B =	ft_lstnew \
		ft_lstadd_front \
	  	ft_lstsize \
	  	ft_lstlast \
		ft_lstadd_back \
  		ft_lstdelone \
 		ft_lstclear \
  		ft_lstiter \
		ft_lstmap

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_B)))

$(NAME): $(OBJS)
	$(AR) $@ $^

all : $(NAME)

clean :
		$(RM) $(OBJS) $(OBJS_B)

fclean : clean
		$(RM) $(NAME)

re : fclean
		$(MAKE) all

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

.PHONY: bonus all clean fclean re