
SRC = $(addsuffix .c, ft_isalpha)

OBJS := $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

INC_DIR =.

CPPFLAGS= I$(INC_DIR)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@


%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re 




