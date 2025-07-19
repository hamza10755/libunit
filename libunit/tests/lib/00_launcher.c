#include "lib_tests.h"
int launcher_lib(char **(*f)(const char *, char)) {
    (void)f;
    t_unit_test *test_list = NULL;
    load_test(&test_list, "success", "success_test", &test_success);
    load_test(&test_list, "fail", "fail_test", &test_fail);
    load_test(&test_list, "segfault", "segfault_test", &test_segfault);
    load_test(&test_list, "sigbus", "sigbus_test", &test_sigbus);
    main_launcher(test_list, f);
    free_list(test_list);
    return 0;
} 