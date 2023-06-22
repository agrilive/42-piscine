#include <unistd.h>

void ft_print_numbers(void) {
    char num = '1';
    while (num <= '9') {
        write(1, &num, 1);
        num++;
    }
}

int main() {
    ft_print_numbers();
    return 0;
}