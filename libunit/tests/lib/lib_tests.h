#ifndef LIB_TESTS_H
#define LIB_TESTS_H
#include "../framework/include/libunit.h"
#include "../libft/libft.h"


int test_success(char **(*f)(const char *, char));
int test_fail(char **(*f)(const char *, char));
int test_segfault(char **(*f)(const char *, char));
int test_sigbus(char **(*f)(const char *, char));
int launcher_lib(char **(*f)(const char *, char));
#endif 