#include <unistd.h> 

int main() {
    int n = 1;
    char letter = 'a';
    char caps;
    while (letter <= 'z') {
        if (n % 2 == 0) {
            caps = letter - 32;
            write(1, &caps, 1);
        }
        else {
            write(1, &letter, 1);
        }
        letter++;
        n++;
    }
    write(1, "\n", 1);
}

// #include <unistd.h>

// int		main(void)
// {
// 	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
// 	return (0);
// }