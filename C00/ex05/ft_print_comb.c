/*
Function that displays all different combinations of 3 different digits in ascending order, listed by ascending order
*/

#include <stdio.h>

void ft_print_comb(void) {
    char a = '0';
    char b = '1';
    char c = '2';

    while (a <= '2') {
        while (b <= '3') {
            while (c <= '4') {
                printf("%d\n",a);
                printf("%d\n",b);
                printf("%d\n",c);
            }
            c++;
        }
        b++;
    }
    a++;
}

int main() {
    ft_print_comb();
    return 0;
}