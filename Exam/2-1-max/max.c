/*
Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max_num = tab[0];
    
    while (i < len)
    {
        if (tab[i] > max_num)
            max_num = tab[i];
        i++;
    }
    return max_num;
}

#include <stdio.h>

int main()
{
    int tab[] = {1, 3, 8, 11};
    int *ptr = tab;

    printf("%d", max(ptr, 4));
    return 0;
} 