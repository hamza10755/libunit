int test_segfault(char **(*f)(const char *, char)) {
    int *p = 0;
    *p = 42;
    return 1;
} 