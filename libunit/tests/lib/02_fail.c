int test_fail(char **(*f)(const char *, char)) {
    (void)f;
    return 1;
} 