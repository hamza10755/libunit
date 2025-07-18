int test_sigbus(char **(*f)(const char *, char)) {
    int *p = (int *)0x12345678;
    *p = 42;
    return 1;
} 