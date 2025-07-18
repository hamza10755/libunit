int different_delimiter_test(char **(*f)(const char *, char))
{
    char **result = f("apple,banana,cherry", ',');
    if (!result)
        return (1);
    if (ft_strcmp(result[0], "apple") != 0)
        return (1);
    if (ft_strcmp(result[1], "banana") != 0)
        return (1);
    if (ft_strcmp(result[2], "cherry") != 0)
        return (1);
    if (result[3] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
