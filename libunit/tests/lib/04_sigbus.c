int test_sigbus(void) {
    #ifdef __APPLE__
    #include <sys/mman.h>
    char *p = mmap(0, 4096, PROT_READ, MAP_PRIVATE | MAP_ANON, -1, 0);
    *p = 42;
    #else
    char arr[4];
    int *p = (int *)(arr + 1);
    *p = 42;
    #endif
    return 1;
} 