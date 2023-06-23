#include <stdio.h>

int ft_strlen(char *str) {
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }
    return n;
}

int main() {
    char str[] = "Hello World"; // Initialize str with a string
    int length = ft_strlen(str); // Store the length
    
    // Print the length
    printf("Length of the string: %d\n", length);
    
    // If we want to use write, conert the length to a string
    /*
    char lengthStr[10]; // Buffer to hold the string representation of the length
    sprintf(lengthStr, "%d", length); // Convert the length to a string
    
    // Write the length string to standard output
    write(1, lengthStr, ft_strlen(lengthStr));
    */

    return 0;
}
