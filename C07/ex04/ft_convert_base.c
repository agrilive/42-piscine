#include <stdlib.h>

int is_valid_base(char *base);
int ft_atoi_base(char *nbr, char *base_from);
char *ft_itoa_base(int nbr, char *base_to);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    if (!is_valid_base(base_from) || !is_valid_base(base_to)) 
    {
        return NULL;
    }
    int nbr_in_base_10;
    char *result;

    nbr_in_base_10 = ft_atoi_base(nbr, base_from);
    result = ft_itoa_base(nbr_in_base_10, base_to);

    return result;
}

#include <stdio.h>

int main()
{
    char *number = "   \t\n\v\f\r-1001011";
    char *base_from = "01";
    char *base_to = "0123456789";
    char *result = ft_convert_base(number, base_from, base_to);
    printf("%s", result);
}