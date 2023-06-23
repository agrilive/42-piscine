#include <stdio.h>
#include <stdbool.h>

int	ft_atoi(const char *str) {
    int result = 0;  // This will hold the final integer value
    int sign = 1;    // This variable is used to handle negative numbers
    int i = 0;       // Index to iterate through the string

    // Skip any whitespace characters at the beginning
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) {
        i++;
    }

    // Check for a sign (optional)
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Convert the number
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Apply the sign to the result
    result *= sign;

    return result;
}

int main() {
    const char *str1 = "   -123";
    const char *str2 = "456";
    const char *str3 = "  +789";
    const char *str4 = "  \t\n\v\f\r-42";

    printf("%d\n", ft_atoi(str1));  // Output: -123
    printf("%d\n", ft_atoi(str2));  // Output: 456
    printf("%d\n", ft_atoi(str3));  // Output: 789
    printf("%d\n", ft_atoi(str4));  // Output: -42

    return 0;
}