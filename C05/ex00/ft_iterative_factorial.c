#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int factorial;

    factorial = 1;
    if (nb < 0)
    {
        return (0);
    }
    while (nb > 1)
    {
        factorial = factorial * nb;
        nb--;
    }
    return (factorial);
}


// int main()
// {
//     printf("%d\n", ft_iterative_factorial(3));
// }