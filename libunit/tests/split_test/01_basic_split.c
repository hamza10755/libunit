int basic_split_test(char **(*f)(const char *, char))
{
    char **result = f("Hello World", ' ');
    if (!result)
        return (1);
    if (ft_strcmp(result[0], "Hello") != 0)
        return (1);
    if (ft_strcmp(result[1], "World") != 0)
        return (1);
    if (result[2] != 0x0)
        return (1);
    free_split(result);
    return (0);
}