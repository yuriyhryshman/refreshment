#include <unistd.h>
#include <stdio.h>

void mx_printchar(char c);
void mx_print_alphabet(void) {
    for(int i = 0; i < 26; i++) {
    mx_printchar(i % 2 == 0 ? i + 97 : i + 65);
    }
}


