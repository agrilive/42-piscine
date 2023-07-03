#include <stdio.h>

int ft_is_prime(int nb) {
    if (nb <= 1) {
        return 0; // 0 and 1 are not prime
    }

    int i = 2;
    while (i * i <= nb) {
        if (nb % i == 0) {
            return 0; // found a divisor, not prime
        }
        i++;
    }

    return 1; // no divisors were found, the number is prime
}

// int main() {
//     // Testing the function
//     printf("Is 0 prime? %d\n", ft_is_prime(0)); // Should print 0
//     printf("Is 1 prime? %d\n", ft_is_prime(1)); // Should print 0
//     printf("Is 2 prime? %d\n", ft_is_prime(2)); // Should print 1
//     printf("Is 3 prime? %d\n", ft_is_prime(3)); // Should print 1
//     printf("Is 4 prime? %d\n", ft_is_prime(4)); // Should print 0
//     printf("Is 17 prime? %d\n", ft_is_prime(17)); // Should print 1
//     printf("Is 25 prime? %d\n", ft_is_prime(25)); // Should print 0
//     printf("Is 49 prime? %d\n", ft_is_prime(49)); // Should print 0
//     return 0;
// }
