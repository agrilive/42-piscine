#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *array;

    i = 0;
    array = (int *)malloc(length * sizeof(int));
    while (i < length)
    {
        array[i] = f(tab[i]);
        i++;
    }
    return array;
}

// This function simply doubles the integer it is given.
int double_number(int n) {
    return 2 * n;
}

#include <stdio.h>

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(tab)/sizeof(tab[0]);
    
    int *mapped = ft_map(tab, length, &double_number); 
    if(mapped == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // exit with error code
    }
    
    for(int i = 0; i < length; i++) {
        printf("%d ", mapped[i]);
    }
    
    free(mapped); // don't forget to free the dynamically allocated memory
    return 0;
}