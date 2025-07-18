#include "../lib_tests.h"
int launcher_lib(char **(*f)(const char *, char)) {
    t_unit_test *test_list = NULL;
    load_test(&test_list, "success", &test_success);
    load_test(&test_list, "fail", &test_fail);
    load_test(&test_list, "segfault", &test_segfault);
    load_test(&test_list, "sigbus", &test_sigbus);
    main_launcher(test_list, f);
    free_list(test_list);
    return 0;
} 