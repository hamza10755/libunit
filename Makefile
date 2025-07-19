NAME = final_libunit

$(NAME): all
all: libft framework real_tests tests
clean:
	$(MAKE) -C real_tests clean
	$(MAKE) -C tests clean
	$(MAKE) -C framework clean
	$(MAKE) -C libft clean
real_tests: real_tests/Makefile
	$(MAKE) -C real_tests
tests: tests/Makefile
	$(MAKE) -C tests
framework: framework/Makefile
	$(MAKE) -C framework
libft: libft/Makefile
	$(MAKE) -C libft
fclean: clean
	$(MAKE) -C real_tests fclean
	$(MAKE) -C tests fclean
	$(MAKE) -C framework fclean
	$(MAKE) -C libft fclean
re: fclean all
test: all
	$(MAKE) -C real_tests test
	$(MAKE) -C tests test
.PHONY: all clean fclean re real_tests tests framework libft test
