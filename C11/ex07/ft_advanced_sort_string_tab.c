#include <stdio.h>
#include <string.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
    int i = 0;
    char *tmp;

    while (tab[i] != 0)
    {
        int j = i + 1;
        while (tab[j] != 0)
        {
            if (cmp(tab[i], tab[j]) > 0)
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

int strcmp_wrapper(char *s1, char *s2)
{
    return strcmp(s1, s2);
}

int main()
{
    char *tab[] = {"zebra", "apple", "mongoose", "banana", "grape", 0};

    printf("Before sorting:\n");
    for(int i = 0; tab[i] != 0; i++)
    {
        printf("%s\n", tab[i]);
    }

    ft_advanced_sort_string_tab(tab, strcmp_wrapper);

    printf("\nAfter sorting:\n");
    for(int i = 0; tab[i] != 0; i++)
    {
        printf("%s\n", tab[i]);
    }

    return 0;
}
