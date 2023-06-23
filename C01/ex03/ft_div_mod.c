#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b; // Results stored in memory location pointed by div
    *mod = a % b;
}

int main() {
    int a = 10;
    int b = 3;
    int div, mod; // Make integers, not pointers
    ft_div_mod(a, b, &div, &mod); // Pass address of div and mod
    printf("%d\n", div); // Print values, not addresses
    printf("%d\n", mod); 
    return 0;
}