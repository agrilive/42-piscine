#include <string.h>
#include <stdio.h>

int main()
{
    char dest[] = "hello";
    char src[] = "world";
    strcat(dest, src);
    printf("%s", dest);
}