#include <stdio.h>

// This function applies another function, specified by the function pointer f, to each element in the array.
void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

// This function simply prints the integer it is given.
void ft_putnbr(int n) {
    printf("%d ", n);
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(tab)/sizeof(tab[0]);
    ft_foreach(tab, length, &ft_putnbr); // This will print each number in the array, followed by a space.
    return 0;
}
