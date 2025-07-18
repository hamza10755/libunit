int long_string_test(char **(*f)(const char *, char))
{
    char **result = f("one two three four five six seven eight nine ten", ' ');
    if (!result)
        return (1);
    if (ft_strcmp(result[0], "one") != 0)
        return (1);
    if (ft_strcmp(result[1], "two") != 0)
        return (1);
    if (ft_strcmp(result[2], "three") != 0)
        return (1);
    if (ft_strcmp(result[3], "four") != 0)
        return (1);
    if (ft_strcmp(result[4], "five") != 0)
        return (1);
    if (ft_strcmp(result[5], "six") != 0)
        return (1);
    if (ft_strcmp(result[6], "seven") != 0)
        return (1);
    if (ft_strcmp(result[7], "eight") != 0)
        return (1);
    if (ft_strcmp(result[8], "nine") != 0)
        return (1);
    if (ft_strcmp(result[9], "ten") != 0)
        return (1);
    if (result[10] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
