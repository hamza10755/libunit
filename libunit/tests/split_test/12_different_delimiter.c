#include "split_test.h"

int different_delimiter_test(char **(*f)(const char *, char))
{
    char **result = f("apple,banana,cherry", ',');
    if (!result)
        return (1);
    if (!result[0] || ft_strncmp(result[0], "apple", 6) != 0)
        return (1);
    if (!result[1] || ft_strncmp(result[1], "banana", 7) != 0)
        return (1);
    if (!result[2] || ft_strncmp(result[2], "cherry", 7) != 0)
        return (1);
    if (result[3] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
