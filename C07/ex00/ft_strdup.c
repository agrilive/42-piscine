#include <stdlib.h>
#include <unistd.h>

char *ft_strdup(char *src)
{
    char *duplicate;
    int i;
    
    i = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    duplicate = (char *) malloc(i * sizeof(char));
    i = 0;
    while (src[i] != '\0')
    {
        duplicate[i] = src[i];
        i++;
    }
    duplicate[i] = '\0';
    return (duplicate);
}