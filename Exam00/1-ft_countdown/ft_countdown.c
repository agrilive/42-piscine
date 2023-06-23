#include <unistd.h>

int main() {
    char array[] = "9876543210";
    write(1, array, 10);
    return 0;
}