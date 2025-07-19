CC = cc
CFLAGS = -Wall -Wextra -Werror
FRAMEWORK_DIR = framework
LIBFT_DIR = libft
TESTS_DIR = tests
NAME = libunit_test_suite

all: $(NAME)

$(NAME):
	@make -C $(FRAMEWORK_DIR)
	@make -C $(LIBFT_DIR)
	@make -C $(TESTS_DIR)

test:
	@cd $(TESTS_DIR) && make test

clean:
	@make clean -C $(FRAMEWORK_DIR)
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(TESTS_DIR)

fclean: clean
	@make fclean -C $(FRAMEWORK_DIR)
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(TESTS_DIR)

re: fclean all
.PHONY: all test clean fclean re
