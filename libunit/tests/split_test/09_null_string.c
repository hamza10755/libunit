#include "split_test.h"

int null_string_test(char **(*f)(const char *, char))
{
    char **result = f(0x0, ' ');
    if (result != 0x0)
        return (1);
    return (0);
}
