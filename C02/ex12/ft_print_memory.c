#include <stdio.h>
#include <unistd.h>

void print_hex_byte(unsigned char byte) {
    char hex_chars[] = "0123456789abcdef";
    write(1, &hex_chars[byte >> 4], 1);
    write(1, &hex_chars[byte & 0xF], 1);
}

void print_address(void *addr) {
    unsigned long address = (unsigned long)addr;
    char buffer[16];
    for (int i = 15; i >= 0; i--) {
        buffer[i] = "0123456789abcdef"[address % 16];
        address /= 16;
    }
    write(1, buffer, 16);
    write(1, ": ", 2);
}

void ft_print_line(void *addr, unsigned int size) {
    unsigned char *byte_addr = (unsigned char *)addr;
    
    // Print the address
    print_address(addr);

    // Print hexadecimal representation
    for (unsigned int i = 0; i < 16; i++) {
        if (i < size) {
            print_hex_byte(byte_addr[i]);
        } else {
            write(1, "  ", 2);
        }
        if (i % 2) {
            write(1, " ", 1);
        }
    }

    // Print content as characters
    for (unsigned int i = 0; i < size; i++) {
        if (byte_addr[i] >= 32 && byte_addr[i] <= 126) {
            write(1, &byte_addr[i], 1);
        } else {
            write(1, ".", 1);
        }
    }
    write(1, "\n", 1);
}

void *ft_print_memory(void *addr, unsigned int size) {
    unsigned char *byte_addr = (unsigned char *)addr;
    
    for (unsigned int i = 0; i < size; i += 16) {
        unsigned int line_size = size - i;
        if (line_size > 16) {
            line_size = 16;
        }
        ft_print_line(byte_addr + i, line_size);
    }
    
    return addr;
}

// int main() {
//     char test[] = "Bonjour les amis\x09\n\x09\x63\x07 est fou\x09tout\x09ce qu on peut faire avec\x09\n\x09print_memory\n\n\n\x09lol.lol\n ";
//     ft_print_memory(test, sizeof(test) - 1);
//     return 0;
// }
