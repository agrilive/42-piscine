#include <stdio.h> 

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main(void) {
    int nbr = 0;
    ft_ft(&nbr);
    printf("%d\n", nbr); // 42
    printf("%p\n", &nbr); // memory address
    return 0;
}