int special_chars_test(char **(*f)(const char *, char))
{
    char **result = f("@#$%^&*()_+-=[]{}|;':\",./<>?", '_');
    if (!result)
        return (1);
    if (ft_strcmp(result[0], "@#$%^&*()") != 0)
        return (1);
    if (ft_strcmp(result[1], "+-=[]{}|;':\",./<>?") != 0)
        return (1);
    if (result[2] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
