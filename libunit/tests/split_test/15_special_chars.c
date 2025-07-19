#include "split_test.h"

int special_chars_test(char **(*f)(const char *, char))
{
    char **result = f("@#$%^&*()_+-=[]{}|;':\",./<>?", '_');
    if (!result)
        return (1);
    if (!result[0] || ft_strncmp(result[0], "@#$%^&*()", 10) != 0)
        return (1);
    if (!result[1] || ft_strncmp(result[1], "+-=[]{}|;':\",./<>?", 20) != 0)
        return (1);
    if (result[2] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
