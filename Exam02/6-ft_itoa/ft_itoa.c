/*
Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>

char *ft_itoa(int nbr)
{
        if (nbr == -2147483648)
    {
        char *str = malloc(12 * sizeof(char));
        if (str) {
            char min_val[] = "-2147483648";
            for (int i = 0; i < 12; i++) {
                str[i] = min_val[i];
            }
            return str;
        }
        return NULL;
    }

    if (nbr == 0) {
        char *str = malloc(2 * sizeof(char));
        if (str) {
            str[0] = '0';
            str[1] = '\0';
            return str;
        }
        return NULL;
    }

    int negative_sign = 0;
    int length = 0;
    int temp = nbr;

    if (nbr < 0)
    {
        negative_sign = 1;
        nbr = -nbr;
    }
    
    temp = nbr;
    while (temp > 0)
    {
        length++;
        temp = temp / 10;
    }
    
    char *array = (char *)malloc((length + negative_sign + 1) * sizeof(char));
    
    if (!array) {
        return NULL; // memory allocation failed
    }
    
    array[length + negative_sign] = '\0';

    int i = length + negative_sign - 1;
    while (nbr > 0)
    {
        array[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
        i--;
    }
    
    if (negative_sign)
    {
        array[0] = '-';
    }
    
    return array;
}


#include <stdio.h>

int main() {
    // Test cases
    int numbers[] = {0, 123, -123, 2147483647, -2147483648};
    int num_tests = sizeof(numbers) / sizeof(numbers[0]);

    // Loop through test cases
    for (int i = 0; i < num_tests; i++) {
        char *result = ft_itoa(numbers[i]);
        printf("Number: %d, String: %s\n", numbers[i], result);
        free(result); // Remember to free the allocated memory!
    }
    
    return 0;
}