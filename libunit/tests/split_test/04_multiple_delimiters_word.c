#include "split_test.h"

int multiple_delimiters_word_test(char **(*f)(const char *, char))
{
    char **result = f("Hello,    World!  hi   there", ' ');
    if (!result)
        return (1);
    if (!result[0] || ft_strncmp(result[0], "Hello,", 6) != 0)
        return (1);
    if (!result[1] || ft_strncmp(result[1], "World!", 7) != 0)
        return (1);
    if (!result[2] || ft_strncmp(result[2], "hi", 3) != 0)
        return (1);
    if (!result[3] || ft_strncmp(result[3], "there", 6) != 0)
        return (1);
    if (result[4] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
