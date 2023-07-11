#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return sign * result;
}

int		ft_add(int a, int b)
{
	return a + b;
}

void perform_operation(char operator, int num1, int num2)
{
    int result;

    if (operator == '+')
        result = num1 + num2;
    else if (operator == '-')
        result = num1 - num2;
    else if ((operator == '/' && num2 == 0) || (operator == '%' && num2 == 0))
    {
        if (operator == '/')
            write(1, "Stop : division by zero", 23);
        else
            write(1, "Stop : modulo by zero", 21);
        return;
    }
    else if (operator == '/')
        result = num1 / num2;
    else if (operator == '%')
        result = num1 % num2;
    else
    {
        write(1, "0\n", 2);
        return;
    }
    ft_putnbr(result);
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    int num1;
    int num2;

    if (argc == 4)
    {
        num1 = ft_atoi(argv[1]);
        num2 = ft_atoi(argv[3]);
        perform_operation(argv[2][0], num1, num2);
    }
    return (0);
}
