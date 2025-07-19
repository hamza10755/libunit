#include "split_test.h"

int start_end_with_del_test(char **(*f)(const char *, char))
{
    char **result = f("    Hello   ", ' ');
    if (!result)
        return (1);
    if (!result[0] || ft_strncmp(result[0], "Hello", 6) != 0)
        return (1);
    if (result[1] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
