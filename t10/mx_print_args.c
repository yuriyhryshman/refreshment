#include <unistd.h>
#include <stdio.h>

int mx_strlen(const char *s);


void mx_printstr(const char *s);

void mx_printchar(char c);



int main(int arg, char *args[]) {
    for (int i = 1; i < arg; i++) {
        mx_printstr(args[i]);
        mx_printchar('\n');
    }
}

