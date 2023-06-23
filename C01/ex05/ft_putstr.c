#include <unistd.h>

void ft_putstr(char *str) {
    int n = 0;
    while (str[n] != '\0') { // Check if current character str[n] is not equal to null terminator '\0'
        write(1, &str[n], 1); // Address of current character
        n++;
    }
}

int main() {
    char str[] = "Hello World";
    ft_putstr(str);
    return 0;
}