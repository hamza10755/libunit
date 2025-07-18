#ifndef SPLIT_TESTS_H
#define SPLIT_TESTS_H
#include "../framework/include/libunit.h"
#include "../libft/libft.h"


int basic_split_test(char **(*f)(const char *, char));
int null_string_test(char **(*f)(const char *, char));
int empty_string_test(char **(*f)(const char *, char));
int start_with_del_test(char **(*f)(const char *, char));
int end_with_del_test(char **(*f)(const char *, char));
int start_end_with_del_test(char **(*f)(const char *, char));
int only_delimiters_test(char **(*f)(const char *, char));
int multiple_delimiters_test(char **(*f)(const char *, char));
int multiple_delimiters_word_test(char **(*f)(const char *, char));
int multiple_word_test(char **(*f)(const char *, char));
int same_string_test(char **(*f)(const char *, char));
int long_string_test(char **(*f)(const char *, char));
int special_chars_test(char **(*f)(const char *, char));
int single_char_test(char **(*f)(const char *, char));
int different_delimiter_test(char **(*f)(const char *, char));
int launcher_split(char **(*f)(const char *, char));

#endif 