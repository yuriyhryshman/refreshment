#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    for (int i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    return dst;
}

/*
int main() {
    char src[40] = "yo neo bro, wassup man?";
    char dst[40];
    mx_strcpy(dst, src);
    printf("%s\n", dst);
}
*/

