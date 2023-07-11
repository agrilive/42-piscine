int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}

void ft_sort_string_tab(char **tab)
{
    char *temp;
    int i;
    int j;
    
    i = 0;
    while (tab[i] != 0)
    {
        j = i + 1;
        while (tab[j] != 0)
        {
            if (ft_strcmp(tab[i], tab[j]) > 0)
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>

int main()
{
    char *tab[] = {"zebra", "apple", "mongoose", "banana", "grape", 0};

    printf("Before sorting:\n");
    for(int i = 0; tab[i] != 0; i++)
    {
        printf("%s\n", tab[i]);
    }

    ft_sort_string_tab(tab);

    printf("\nAfter sorting:\n");
    for(int i = 0; tab[i] != 0; i++)
    {
        printf("%s\n", tab[i]);
    }

    return 0;
}
