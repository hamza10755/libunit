int single_char_test(char **(*f)(const char *, char))
{
    char **result = f("a", ' ');
    if (!result)
        return (1);
    if (ft_strcmp(result[0], "a") != 0)
        return (1);
    if (result[1] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
