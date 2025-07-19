CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBUNIT_DIR = ../../framework
LIBFT_DIR = ../../libft
NAME = split_tests.a
SRCS = 00_lun.c 01_basic_split.c 02_multiple_word.c 03_multiple_delimiters.c \
       04_multiple_delimiters_word.c 05_end_with_del.c 06_start_with_del.c \
       07_start_end_with_del.c 08_empty_string.c 09_null_string.c \
       10_only_delimiters.c 11_single_char.c 12_different_delimiter.c \
       13_same_string.c 14_long_string.c 15_special_chars.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I$(LIBUNIT_DIR)/include -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
