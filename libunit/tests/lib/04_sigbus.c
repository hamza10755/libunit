#include <signal.h>

int test_sigbus(char **(*f)(const char *, char)) {
    (void)f;
    raise(SIGBUS);
    return 1;
} 