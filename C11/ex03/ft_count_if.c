int ft_count_if(char **tab, int length, int(*f)(char*))
{
    int num;
    int i;

    num = 0;
    i = 0;
    while (i < length)
    {
        if (f(tab[i]) != 0)
            num++;
        i++;
    }
    return num;
}

// This function simply checks if the first character of the string is 'a'.
int starts_with_a(char* str) {
    return str[0] == 'a';
}

#include <stdio.h>

int main() {
    char *tab[] = {"apple", "banana", "avocado", "cherry"};
    int length = sizeof(tab)/sizeof(tab[0]);
    
    int count = ft_count_if(tab, length, &starts_with_a); 
    printf("%d\n", count); // This will print 2 because "apple" and "avocado" start with 'a'.
    
    return 0;
}