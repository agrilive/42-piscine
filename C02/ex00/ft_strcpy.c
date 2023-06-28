char *ft_strcpy(char *dest, char *src)
{
    int i;

    i =  0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// #include <stdio.h>
// int main()
// {
//     char dest[20] = "hello";
//     char src[] = "world";
//     ft_strcpy(dest, src);
//     printf("%s", dest);
//     return 0;
// }