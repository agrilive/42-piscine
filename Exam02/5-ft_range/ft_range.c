/*
Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int length = start - end;
    if (length < 0)
        length = -length;
    length = length + 1;

    int *array = (int *)malloc(length * sizeof(int));
    int i = 0;
    if (start <= end)
    {
        while (start <= end)
        {
            array[i++] = start++;
        }
    } 
    else 
    {
        while (start >= end) 
        {
            array[i++] = start--;
        }
    }
    return array;
}

#include <stdio.h>

int main() {
    int start = 0, end = -3;
    int length = end - start;
    if (length < 0) {
        length = -length;
    }
    length = length + 1;

    // Example usage
    int *result = ft_range(start, end);

    // Printing the results
    for (int i = 0; i < length; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free allocated memory
    free(result);

    return 0;
}