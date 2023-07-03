#include <stdio.h>

int ft_sqrt(int nb) {
    // Step 1: Check for negative input
    if (nb < 0) {
        return 0;
    }

    // Step 2 & 3: Check for perfect square using a while loop
    int i = 1;
    while (i * i <= nb) {
        if (i * i == nb) {
            return i; // The square root is an integer
        }
        i++;
    }

    // The square root is not an integer
    return 0;
}

// int main() {
//     // Testing the function
//     printf("Square root of 9: %d\n", ft_sqrt(9));
//     printf("Square root of 16: %d\n", ft_sqrt(16));
//     printf("Square root of 2: %d\n", ft_sqrt(2));
//     printf("Square root of -4: %d\n", ft_sqrt(-4));
//     return 0;
// }
