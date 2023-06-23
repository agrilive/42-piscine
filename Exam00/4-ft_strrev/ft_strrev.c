#include <unistd.h> 

char *ft_strrev(char *str) {
    int size = 0;
    while (str[size] != '\0') {
        size++;
    }
    int i = 0;
    char buf;
    while (i < size - 1) { // -1 because size holds length of string but string indices are 0-based
        buf = str[i];
        str[i] = str[size - 1];
        str[size - 1] = buf;
        i++;
        size--;
    }
    return str;
}

int main() {
    char str[] = "abcd";
    ft_strrev(str); // do not need to assign variable as string is reversed in place
    write(1, str, 4);
    return 0;
}