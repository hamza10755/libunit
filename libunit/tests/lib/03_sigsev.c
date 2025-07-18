int test_segfault(void) {
    int *p = 0;
    *p = 42;
    return 1;
} 