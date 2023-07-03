#include <stdio.h>

int ft_recursive_factorial(int nb) {
    if (nb < 0) {
        return 0; // Factorial is not defined for negative numbers
    }
    if (nb <= 1) {
        return 1; // Base case: 0! = 1 and 1! = 1
    }
    
    // Recursive case: nb! = nb * (nb-1)!
    return nb * ft_recursive_factorial(nb - 1);
}

// int main() {
//     // Testing the function
//     printf("Factorial of 5: %d\n", ft_recursive_factorial(5));
//     printf("Factorial of 0: %d\n", ft_recursive_factorial(0));
//     printf("Factorial of -3: %d\n", ft_recursive_factorial(-3));
//     return 0;
// }
