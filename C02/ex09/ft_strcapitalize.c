char *ft_strcapitalize(char *str)
{
    char *original = str;
    int newWord = 1;

    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))
        {
            if (newWord)
            {
                if (*str >= 'a' && *str <= 'z')
                    *str = *str - 32;
                newWord = 0;
            }
            else{
                if (*str >= 'A' && *str <= 'Z')
                    *str = *str + 32;
            }
        }
        else
        {
            newWord = 1;
        }
        str++;
    }
    return original;
}