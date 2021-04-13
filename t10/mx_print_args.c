#include <unistd.h>
#include <stdio.h>

int mx_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}


void mx_printstr(const char *s) {
    if (s)
        write(1, s, mx_strlen(s));
}

void mx_printchar(char c) {
    char s[2];
    s[0] = c;
    s[1] = '\0';
    write(1, s, 1);
}



int main(int arg, char *args[]) {
    for (int i = 1; i < arg; i++) {
        mx_printstr(args[i]);
        mx_printchar('\n');
    }
}

