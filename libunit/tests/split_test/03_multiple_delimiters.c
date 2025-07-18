int multiple_delimiters_test(char **(*f)(const char *, char))
{
    char **result = f("Hello,    World!", ' ');
    if (!result)
        return (1);
    if (ft_strcmp(result[0], "Hello,") != 0)
        return (1);
    if (ft_strcmp(result[1], "World!") != 0)
        return (1);
    if (ft_strcmp(result[2], "This") != 0)
        return (1);
    if (ft_strcmp(result[3], "is") != 0)
        return (1);
    if (ft_strcmp(result[4], "a") != 0)
        return (1);
    if (ft_strcmp(result[5], "test.") != 0)
        return (1);
    if (result[6] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
