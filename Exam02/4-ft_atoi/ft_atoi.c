/*
Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

int ft_atoi(const char *str)
{
    int i = 0;
    int nbr = 0;
    int sign = 1;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }
    return nbr * sign;
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_atoi("   -123"));    // Output: -123
    printf("%d\n", ft_atoi("  +4567  "));  // Output: 4567
    printf("%d\n", ft_atoi("9876abcd"));   // Output: 9876
    printf("%d\n", ft_atoi("-a123"));      // Output: 0
    printf("%d\n", ft_atoi("    123"));    // Output: 123
}