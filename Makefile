CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar crs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME) $(OBJECTS)

re: fclean all

.PHONY: all clean flcean re