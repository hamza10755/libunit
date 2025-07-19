int test_segfault(char **(*f)(const char *, char)) {
    (void)f;
    int *p = 0;
    *p = 42;
    return 1;
} 