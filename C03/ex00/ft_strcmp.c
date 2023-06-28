/*
#include <string.h>
#include  <stdio.h>

int main()
{
    char s1[] = "hello";
    char s2[] = "world";
    int d = strcmp(s1, s2);
    printf("%d\n", d);
    return 0;
}
*/

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

// #include <stdio.h>

// int main()
// {
//     char s1[] = "hello";
//     char s2[] = "hello world";

//     int d = ft_strcmp(s1, s2);
//     printf("%d\n", d);
// }