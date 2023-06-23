#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int original_a = *a; // Store in temporary variable before *a is modified
    *a = original_a / *b;
    *b = original_a % *b;
}

int main() {
    int a = 10;
    int b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a); // No need to dereference here, a is not a pointer
    printf("%d\n", b); // No need to dereference here, b is not a pointer
    return 0;
}