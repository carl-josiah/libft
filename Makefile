NAME = libft.a

AR = ar

ARFLAGS = rcs

CC = cc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c 		\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c 			\
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c 		\
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c 	\
ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c 		\
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c 		\
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c						\

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c			\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c	\

OBJ = $(SRC:%.c=%.o)

BONUS_OBJ = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) 
	@$(AR) $(ARFLAGS) $@ $^

bonus: $(OBJ) $(BONUS_OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus