NAME = main

CC = gcc
CFLAGS = -Wall -Wextra -g3

SRCS = main.c ft_isalpha.c ft_strlen.c ft_memset.c ft_bzero.c ft_momvome.c ft_substr.c ft_strjoin.c ft_sttrirm.c ft_strchr.c ft_split.c ft_atoi.c ft_itoa.c ft_calloc.c ft_strmapi.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q *.o

fclean: clean
	del /Q $(NAME).exe

re: fclean all
