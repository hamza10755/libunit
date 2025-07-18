CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBUNIT_DIR = ../framework
NAME = tests.out
SRCS = main.c lib/00_launcher.c lib/01_success.c lib/02_fail.c lib/03_sigsev.c lib/04_sigbus.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I$(LIBUNIT_DIR)/include
LIBS = $(LIBUNIT_DIR)/libunit.a
all: $(NAME)
$(NAME): $(OBJS)
	@make -C $(LIBUNIT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) $(LIBS) -o $(NAME)
clean:
	rm -f $(OBJS)
	@make clean -C $(LIBUNIT_DIR)
fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBUNIT_DIR)
re: fclean all
test: all
	@./$(NAME)
.PHONY: all clean fclean re test 