#include <stdio.h>

int abs(int n) {
    return n < 0 ? -1 * n : n;
}

int mx_strcmp(const char *s1, const char *s2) {
    int max = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (abs(s1[i] - s2[i]) > abs(max)) max = s1[i] - s2[i];
    }
    return max;
}


/*
int main(){
   printf("%d",mx_strcmp("zfz", "zhz"));
}
*/

