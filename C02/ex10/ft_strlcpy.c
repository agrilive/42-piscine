// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char dest[20];
//     char src[] = "helloworld";
//     strlcpy(dest, src, 6);
//     printf("%s\n", dest); // hello
// }

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size == 0)
    {
        while (src[i])
            i++;
        return i;
    }
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    // while (src[i]) {
    //     i++;
    // }
    return i;
}
