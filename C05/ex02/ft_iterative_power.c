int ft_iterative_power(int nb, int power)
{
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    int original_nb;

    original_nb = nb;
    while (power > 1)
    {
        nb = nb * original_nb;
        power--;
    }
    return (nb);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_iterative_power(3, 3));
// }