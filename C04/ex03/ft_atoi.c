int ft_atoi(char *str)
{
    int i;
    int sign;
    int nbr;
    int number_started;

    i = 0;
    sign = 1;
    nbr = 0;
    number_started = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            nbr = nbr * 10 + (str[i] - 48);
            number_started = 1;
        }
        else if (number_started || !(str[i] == '-' || str[i] == '+'))
        {
            break;
        }
        i++;
    }
    return (nbr * sign);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_atoi("123"));
//     printf("%d\n", ft_atoi("-123"));
//     printf("%d\n", ft_atoi(" ---+--+1234ab567"));
// }