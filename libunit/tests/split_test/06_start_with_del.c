int start_with_del_test(char **(*f)(const char *, char))
{
    char **result = f("    Hello,", ' ');
    if (!result)
        return (1);
    if (ft_strcmp(result[0], "Hello,") != 0)
        return (1);
    if (result[1] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
