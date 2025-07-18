int only_delimiters_test(char **(*f)(const char *, char))
{
    char **result = f("     ", ' ');
    if (!result)
        return (1);
    if (result[0] != 0x0)
        return (1);
    free_split(result);
    return (0);
}
