#include <stdlib.h>
#include <stdio.h>

int is_separator(char c, char *charset)
{
    while (*charset)
    {
        if (c == *charset)
        {
            return 1;
        }
        charset++;
    }
    return 0;
}

int count_words(char *str, char *charset)
{
    int count;
    
    count = 0;
    while (*str)
    {
        while (*str && is_separator(*str, charset))
        {
            str++;
        }
        if (*str && !is_separator(*str, charset))
        {
            count++;
            while (*str && !is_separator(*str, charset))
            {
                str++;
            }
        }
    }
    return count;
}

char **ft_split(char *str, char *charset)
{
    int words = count_words(str, charset);
    char **result = (char **)malloc(sizeof(char *) * (words + 1));
    int i = 0;
    
    while (*str) {
        while (*str && is_separator(*str, charset))
        {
            str++;
        }
        if (*str && !is_separator(*str, charset))
        {
            char *start = str;
            while (*str && !is_separator(*str, charset))
            {
                str++;
            }
            char *end = str;
            char *word = (char *)malloc(end - start + 1);
            int j;

            j = 0;
            while (start + j < end)
            {
                word[j] = start[j];
                j++;
            }
            word[j] = '\0';
            result[i++] = word;
        }
    }
    result[i] = 0; // mark the end with NULL
    return result;
}

int main() {
    char **split = ft_split("Hello, world! This is a test.", ", !");

    for (int i = 0; split[i]; i++) {
        printf("%s\n", split[i]);
        free(split[i]);
    }
    free(split);

    return 0;
}
