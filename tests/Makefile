CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBUNIT_DIR = ../framework
LIBFT_DIR = ../libft
SPLIT_TEST_DIR = split_test
LIB_TEST_DIR = lib
NAME = test_runner
SRCS = main.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I$(LIBUNIT_DIR)/include -I$(LIBFT_DIR) -I$(SPLIT_TEST_DIR) -I$(LIB_TEST_DIR)
LIBS = $(LIBUNIT_DIR)/libunit.a $(LIBFT_DIR)/libft.a $(SPLIT_TEST_DIR)/split_tests.a $(LIB_TEST_DIR)/lib_tests.a

all: $(NAME)

$(NAME): libs $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(SPLIT_TEST_DIR)/split_tests.a $(LIB_TEST_DIR)/lib_tests.a $(LIBUNIT_DIR)/libunit.a $(LIBFT_DIR)/libft.a -o $(NAME)

libs:
	@make -C $(LIBUNIT_DIR)
	@make -C $(LIBFT_DIR)
	@make -C $(SPLIT_TEST_DIR)
	@make -C $(LIB_TEST_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	@make clean -C $(LIBUNIT_DIR)
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(SPLIT_TEST_DIR)
	@make clean -C $(LIB_TEST_DIR)

fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBUNIT_DIR)
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(SPLIT_TEST_DIR)
	@make fclean -C $(LIB_TEST_DIR)

re: fclean all

test: all
	@./$(NAME)

.PHONY: all clean fclean re libs test
