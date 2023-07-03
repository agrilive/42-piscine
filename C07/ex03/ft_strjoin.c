#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (*str)
    {
        len++;
        str++;
    }
    return (len);
}

char *ft_strcat(char *dest, char *src)
{
    int dest_len;
    int i;
    
    dest_len = ft_strlen(dest);
    i = 0;
    while (src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size <= 0)
    {
        char *empty_string = (char *)malloc(1);
        empty_string[0] = '\0';
        return empty_string;
    }
    
    // get total length: length of all strings + separator
    int total_len;
    int sep_len;
    int i;

    total_len = 0;
    sep_len = ft_strlen(sep);
    i = 0;
    while (i < size)
    {
        total_len = total_len + ft_strlen(strs[i]);
        if (i < size - 1)
        {
            total_len = total_len + sep_len;
        }
        i++;
    }

    // concatenate strings + add separator
    char *result;
    
    result = (char *)malloc(total_len + 1);
    result[0] = '\0';
    i = 0;
    while (i < size)
    {
        ft_strcat(result, strs[i]);
        if (i < size - 1)
        {
            ft_strcat(result, sep);
        }
        i++;
    }
    return (result);
}