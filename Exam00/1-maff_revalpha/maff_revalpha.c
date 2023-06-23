#include <unistd.h>

int main() {
    int i = 1;
    char letter = 'z';
    while (letter >= 'a') {
        if (i % 2 == 0) {
            char caps = letter -32;
            write(1, &caps, 1);
        }
        else {
            write(1, &letter, 1);
        }
        letter--;
        i++;
    }
	write(1, "\n", 1);
}

// #include <unistd.h>

// int	main(void) {
// 	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
// 	return (0);
// }