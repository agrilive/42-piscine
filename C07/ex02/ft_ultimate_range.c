#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
    {
        range = NULL;
        return 0;
    }
    
    *range = (int *)malloc((max - min) * sizeof(int));

    if (*range == NULL)
        return -1;

    int i = 0;
    while (i < max - min)
    {
        (*range)[i] = min + i;
        i++;
    }

    return max - min;
}

#include <stdio.h>

int main()
{
    int min = 10;
    int max = 20;
    int *range;
    int size = ft_ultimate_range(&range, min, max);
    int i = 0;

    if (size > 0)
    {
        while (i < size)
        {
            i++;
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    }
    return 0;
}