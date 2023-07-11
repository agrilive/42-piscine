int ft_any(char **tab, int(*f)(char*))
{
    int num;
    int i;

    i = 0;
    while (tab[i])
    {
        num = f(tab[i]);
        if (num != 0)
            return 1;
    }
    return 0;
}

// This function simply checks if the first character of the string is 'a'.
int starts_with_a(char* str) {
    return str[0] == 'a';
}

# include <stdio.h>

int main() {
    char *tab[] = {"apple", "banana", "cherry", NULL};
    
    int result = ft_any(tab, &starts_with_a); 
    printf("%d\n", result); // This will print 1 because "apple" starts with 'a'.
    
    return 0;
}