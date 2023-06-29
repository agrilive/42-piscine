#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
    while (*str)
    {
        if (*str >= 32 && *str <= 126)
        {
            ft_putchar(*str);
        }
        else
        {
            char hex[3] = "\\00";
            hex[1] = "0123456789abcdef"[(*str >> 4) & 0xF];
            hex[2] = "0123456789abcdef"[*str & 0xF];
            write(1, hex, 3);
        }
        str++;
    }
}

// int main() {
//     // Test case
//     char test[] = "Coucou\ntu vas bien ?";
//     ft_putstr_non_printable(test);
//     return 0;
// }