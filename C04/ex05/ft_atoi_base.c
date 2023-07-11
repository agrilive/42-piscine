#include <stdbool.h>

int ft_atoi_base(char *str, char *base) {
    // Calculate the length of the base string to determine the base
    int base_len = 0;
    while (base[base_len]) {
        base_len++;
    }

    // Return 0 if the base is not valid (less than 2)
    if (base_len < 2) {
        return 0;
    }

    // Skip whitespace characters at the beginning of the string
    int i = 0;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) {
        i++;
    }

    // Handle the optional sign
    bool is_negative = false;
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            is_negative = true;
        }
        i++;
    }

    // Convert string to integer with given base
    int result = 0;
    while (str[i]) {
        // Find the value of the current digit in the base
        int digit_value = -1;
        for (int j = 0; j < base_len; j++) {
            if (base[j] == str[i]) {
                digit_value = j;
                break;
            }
        }

        // Invalid character for the base
        if (digit_value == -1) {
            break;
        }

        result = result * base_len + digit_value;
        i++;
    }

    // Apply the sign to the result
    if (is_negative) {
        result = -result;
    }

    return result;
}




// int main()
// {
//     char *str1 = "1E";
//     char *base1 = "0123456789ABCDEF";
//     int number1 = ft_atoi_base(str1, base1);
    
//     char *str2 = "101010";
//     char *base2 = "01";
//     int number2 = ft_atoi_base(str2, base2);
    
//     char *str3 = "-1a3";
//     char *base3 = "0123456789abcdef";
//     int number3 = ft_atoi_base(str3, base3);

//     // Number1 should be 30, Number2 should be 42, Number3 should be -419
//     return 0;
// }
