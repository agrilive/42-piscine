char *ft_strupcase(char *str)
{
    char *original = str;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str = *str - 32;
        str++;
    }
    return original;
}