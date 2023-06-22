#include <stdio.h>

void ft_swap(int *a, int *b) {
    int buf = *a;
    *a = *b;
    *b = buf;
}

int main() {
    int a = 5;
    int b = 10;
    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}