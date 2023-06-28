char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

// #include <stdio.h>

// int main()
// {
//     char dest[] = "world";
//     char src[] = "h";
//     ft_strncpy(dest, src, 3);
//     printf("%s\n", dest);
// }