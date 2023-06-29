int ft_str_is_alpha(char *str)
{
    if (*str == '\0')
        return 1;

    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
            str++;
        else
            return 0;
    }
    return 1;
}