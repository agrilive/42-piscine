/*
Reproduce the behavior of the function strdup (man strdup)
*/

#include <stdlib.h>

char *ft_strdup(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    char *ptr = (char *)malloc((len + 1) * sizeof(char));
    int i = 0;
    while (i < len)
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}

#include <stdio.h>

int main() {
    // Test with a regular string
    char *original1 = "Hello, World!";
    char *duplicate1 = ft_strdup(original1);
    if (duplicate1 != NULL) {
        printf("Original: %s\n", original1);
        printf("Duplicate: %s\n\n", duplicate1);
        free(duplicate1);
    }

    // Test with an empty string
    char *original2 = "";
    char *duplicate2 = ft_strdup(original2);
    if (duplicate2 != NULL) {
        printf("Original (empty string): %s\n", original2);
        printf("Duplicate (empty string): %s\n\n", duplicate2);
        free(duplicate2);
    }
    
    // Test with a string containing spaces and special characters
    char *original3 = "   Spaces  &^%$#@!   ";
    char *duplicate3 = ft_strdup(original3);
    if (duplicate3 != NULL) {
        printf("Original (special characters): %s\n", original3);
        printf("Duplicate (special characters): %s\n\n", duplicate3);
        free(duplicate3);
    }
    
    return 0;
}