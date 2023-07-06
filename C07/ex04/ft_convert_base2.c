#include <stdlib.h>

int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (*str)
    {
        length++;
        str++;
    }
    return length;
}

int is_valid_base(char *base)
{
    int len = ft_strlen(base);

    if (len < 2)
        return 0;

    int i;

    i = 0;
    while (i < len)
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
            return 0;
        
        int j;

        j = i + 1;
        while (j < len)
        {
            if (base[i] == base[j])
                return 0;
        }
    }
    return 1;
}

int ft_atoi_base(char *nbr, char *base_from)
{
    int base_len;
    int result;
    int sign;
    int i;
    
    base_len = ft_strlen(base_from);
    result = 0;
    result = 1;
    i = 0;
    while (nbr[i] && (nbr[i] == ' ' || nbr[i] == '\t' || nbr[i] == '\n'))
    {
        i++;
    }
    if (nbr[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (nbr[i] == '+')
        i++;
    while (nbr[i])
    {
        int j;

        j = 0;
        while (j < base_len && base_from[j] != nbr[i])
        {
            j++;
        }
        if (j < base_len)
            result = result * base_len + j;
        else
            return sign * result;
        i++;
    }
    return sign * result;
}

char *ft_itoa_base(int nbr, char *base_to)
{
    char buffer[33];
    char *result;
    int base_len;
    int i;
    int is_negative;

    is_negative = 0;
    if (nbr < 0)
    {
        is_negative = 1;
        nbr = -nbr;
    }
    base_len = ft_strlen(base_to);
    i = 32;
    buffer[i--] = '\0';
    if (nbr == 0)
        buffer[i--] = base_to[0];
    while (nbr > 0)
    {
        buffer[i--] = base_to[nbr % base_len];
        nbr /= base_len;
    }
    if (is_negative)
        buffer[i--] = '-';
    result = (char *)malloc(33 - i);
    int j;

    j = 0;
    while (++i < 33)
    {
        result[j++] = buffer[i];
    }
    return result;
}