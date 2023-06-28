/*
#include <string.h>
#include <stdio.h>

int main()
{
    char s1[] = "hello";
    char s2[] = "help";
    int d = strncmp(s1, s2, 5);
    printf("%d\n", d);
}
*/

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while (*s1 && *s2 && *s1 == *s2 && i < n - 1)
    {
        s1++;
        s2++;
        i++;
    }

    if (i < n)
        return (*s1 - *s2);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char s1[] = "hello";
//     char s2[] = "hello";
//     unsigned n = 5;
    
//     int d = ft_strncmp(s1, s2, n);
//     printf("%d\n", d);
// }