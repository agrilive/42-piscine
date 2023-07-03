#include <stdlib.h>

int *ft_range(int min, int max)
{
    if (min >= max)
        return (NULL);

    int *array;
    
    array = (int *) malloc((max - min) * sizeof(int));

    if (array == NULL)
        return NULL;
    
    int i = 0;
    while (i < max - min)
    {
        array[i] = min + i;
        i++;
    }

    return array;
}

#include <stdio.h>

int main()
{
    int min = 10;
    int max = 20;
    int *array = ft_range(10, 20);
    int i = 0;

    if (array)
    {
        while (i < max - min)
        {
            printf("%d ", array[i]);
            i++;
        }
        printf("\n");
        free(array);
    }
    return 0;
}