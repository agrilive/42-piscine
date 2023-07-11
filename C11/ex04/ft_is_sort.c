int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i;

    i = 0;
    while (i < length - 1)
    {
        if ((f(tab[i], tab[i + 1])) > 0)
            return 0;
        i++;
    }
    return 1;
}

int ascending(int a, int b) {
    return a - b;
}

#include <stdio.h>

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int length = sizeof(tab) / sizeof(tab[0]);
    printf("%d\n", ft_is_sort(tab, length, ascending));  // Outputs 1
}