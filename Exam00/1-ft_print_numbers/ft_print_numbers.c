// #include <unistd.h>

// void ft_print_numbers(void) {
//     char array[] = "0123456789";
//     write(1, array, 10);
// }

// int main() {
//     ft_print_numbers();
// }


#include <unistd.h>

void ft_print_numbers(void) {
	char digit = '0';
	while (digit <= '9') {
		write(1, &digit, 1);
		digit++;
	}
}


int main() {
    ft_print_numbers();
}