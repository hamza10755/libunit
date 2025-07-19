CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBUNIT_DIR = ../framework
LIBFT_DIR = ../libft
NAME = tests
SRCS = 00_launcher.c 01_success.c 02_fail.c 03_sigsev.c 04_sigbus.c main.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I$(LIBUNIT_DIR)/include -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS) -L$(LIBUNIT_DIR) -lunit -L$(LIBFT_DIR) -lft

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
test: all
	@./$(NAME)
.PHONY: all clean fclean re test