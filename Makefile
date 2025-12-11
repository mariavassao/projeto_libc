NAME = main

CC = gcc
CFLAGS = -Wall -Wextra -g3

SRCS = main.c ft_isalpha.c ft_strlen.c ft_memset.c ft_bzero.c ft_momvome.c ft_substr.c

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
