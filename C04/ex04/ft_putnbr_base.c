#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_valid_base(char *base)
{
    int i, j;

    if (!base || !base[0] || !base[1]) // Check for empty or single character base
        return 0;

    for (i = 0; base[i]; i++)
    {
        if (base[i] == '+' || base[i] == '-') // Check for invalid characters
            return 0;
        for (j = i + 1; base[j]; j++) // Check for duplicates
        {
            if (base[i] == base[j])
                return 0;
        }
    }

    return 1; // Base is valid
}

void ft_putnbr_base(int nbr, char *base)
{
    int i;
    long n;
    int base_length;
    char buffer[50];

    if (!is_valid_base(base)) // Check for a valid base
        return;

    n = nbr;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }

    base_length = 0;
    while (base[base_length]) // Count base characters
        base_length++;

    i = 0;
    if (n == 0)
        buffer[i++] = base[0];
    while (n > 0)
    {
        buffer[i++] = base[n % base_length]; // Convert to specified base
        n = n / base_length;
    }

    while (i > 0) // Print the converted number
        ft_putchar(buffer[--i]);
}

// int main()
// {
//     ft_putnbr_base(12345, "01"); // Convert 12345 to binary
//     ft_putchar('\n');
//     ft_putnbr_base(-4567, "0123456789ABCDEF"); // Convert -4567 to hexadecimal
//     ft_putchar('\n');
//     ft_putnbr_base(789, "poneyvif"); // Convert 789 to base 8 with custom characters
//     ft_putchar('\n');
//     return 0;
// }
