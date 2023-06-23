#include <stdio.h>

void ft_swap(int *a, int *b) {
    int buf;
    buf = *a;
    *a = *b;
    *b = buf;
}

int main() {
    int a = 5;
    int b = 9;
    ft_swap(&a, &b);
    printf("%d, %d", a, b);
}