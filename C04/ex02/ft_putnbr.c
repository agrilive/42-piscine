#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == 0)
    {
        ft_putchar('0');
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        if (nb == -2147483648) {
            ft_putchar('2');
            nb = 147483648;
        } else {
            nb = nb * -1;
        }
    }

    char buffer[11];
    int i;

    i = 0;
    while (nb > 0)
    {
        buffer[i] = (nb % 10) + '0';
        nb = nb / 10;
        i++;
    }
    while (i-- >= 0)
    {
        ft_putchar(buffer[i]);
    }
}

// int main() {
//     ft_putnbr(-2147483648);
//     ft_putchar('\n');
//     ft_putnbr(2147483647);
//     ft_putchar('\n');
//     ft_putnbr(0);
//     ft_putchar('\n');
//     ft_putnbr(42);
//     ft_putchar('\n');
//     ft_putnbr(-42);
//     ft_putchar('\n');
//     return 0;
// }