#include <stdio.h> 

void ft_sort_int_tab(int *tab, int size) {
    int n = 0;
    int i, buf;
    while (n < size) {
        i = n + 1; // reset i for each iteration of the outer loop
        while (i < size) { // i <= size is wrong as array starts with index 0
            if (tab[i] < tab[n]) {
                buf = tab[n];
                tab[n] = tab[i];
                tab[i] = buf;
            }
            i++;
        }
        n++;
    }
}

int main() {
    int size = 4;
    int tab[] = {9, 6, 8, 7};
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
}