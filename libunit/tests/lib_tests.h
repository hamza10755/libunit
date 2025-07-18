#ifndef LIB_TESTS_H
#define LIB_TESTS_H
#include "../framework/include/libunit.h"


int test_success(void);
int test_fail(void);
int test_segfault(void);
int test_sigbus(void);
int launcher_lib(void);
#endif 