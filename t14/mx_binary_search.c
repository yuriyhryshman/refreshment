#include <stdio.h>

static int abs(int n) {
    return n < 0 ? -1 * n : n;
}


static int mx_strcmp(const char *s1, const char *s2) {
    int max = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (abs(s1[i] - s2[i]) > abs(max)) max = s1[i] - s2[i];
    }
    return max;
}

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int count = 0;
    
}



